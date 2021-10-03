//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "SettingsView.h"
#include "SiteVisit.h"
#include <vector>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TSettingsForm *SettingsForm;
//---------------------------------------------------------------------------
__fastcall TSettingsForm::TSettingsForm(TComponent* Owner)
	: TForm(Owner)
{

}
//---------------------------------------------------------------------------
void __fastcall TSettingsForm::closeBtnClick(TObject *Sender)
{
    SettingsForm->Close();
}
//---------------------------------------------------------------------------
void __fastcall TSettingsForm::hideBtnClick(TObject *Sender)
{
	Application->Minimize();
}

void TSettingsForm::FolderSize(AnsiString Folder, int &Size, int &fCount, int &folCount)
{
	TSearchRec SR;
	if (Folder[Folder.Length()] == '\\')
		Folder.SetLength(Folder.Length() - 1);
	if (FindFirst(Folder + "\\*.*", faAnyFile, SR) == 0)
		do
		{
			if (SR.Name != "." && SR.Name != "..")
			{
				if ((SR.Attr & faDirectory) != 0)
				{
					FolderSize(Folder + "\\" + SR.Name, Size, fCount, folCount);
					folCount++;
				}
				else
				{
					Size = Size + SR.Size;
					fCount++;
				}
			}
		} while (FindNext(SR) == 0);
		FindClose(SR);
}
//---------------------------------------------------------------------------

void __fastcall TSettingsForm::FormShow(TObject *Sender)
{
	int casheSize = browserManager->getCasheSize();
	int browserDataSize = browserManager->getBrowserDataSize();
	casheSizeLabel->Caption = IntToStr((casheSize / KB_SIZE / KB_SIZE)) + " MB";
	browserDataSizeLabel->Caption = IntToStr((browserDataSize / KB_SIZE / KB_SIZE)) + " MB";
	bookmarksAmountLabel->Caption = IntToStr(WebView->bookmarksManager->getSize());
	browserHistorySizeLabel->Caption = IntToStr(WebView->historyManager->getSize());
	updateHistoryBox();
	//ShowMessage(IntToStr(bookmarksManager->getSize()));
}
//---------------------------------------------------------------------------

void __fastcall TSettingsForm::clearCasheBtnClick(TObject *Sender)
{
	browserManager->clearCashe();
	Application
		->MessageBox(RESTART_WARNING,
					 MESSAGE_TITLE,
					 MB_OK | MB_ICONINFORMATION);
	ShellExecute(0, 0, Application->ExeName.c_str(), 0, 0, SW_SHOW);
	Application->Terminate();
}
//---------------------------------------------------------------------------

void __fastcall TSettingsForm::clearBrowserDataBtnClick(TObject *Sender)
{
	if (Application->MessageBox(BROWSER_CLEANING_WARNING, MESSAGE_TITLE, 
		MB_YESNO | MB_ICONINFORMATION) == IDYES) 
	{
		delete WebView->PageControl;
		Sleep(200);
		browserManager->clearBrowserData();
		ShellExecute(0, 0, Application->ExeName.c_str(), 0, 0, SW_SHOW);
		Application->Terminate();
	}
}
//---------------------------------------------------------------------------

void __fastcall TSettingsForm::clearBookmarksBtnClick(TObject *Sender)
{
	if (Application->MessageBox(BOOKMARKS_CLEANING_WARNING, MESSAGE_TITLE, 
		MB_YESNO | MB_ICONINFORMATION) == IDYES) 
	{
		WebView->bookmarksManager->clearBookmarks();
		WebView->bookmarksBox->Clear();
		bookmarksAmountLabel->Caption = IntToStr(WebView->bookmarksManager->getSize());
	}
}

void TSettingsForm::updateHistoryBox()
{
	std::vector<SiteVisit> history = WebView->historyManager->getHistory();
	historyBox->Clear();
	for (int i = history.size() - 1; i >= 0; i--)
	{
		historyBox->Items->Add((history[i].getTime() + " - " +
								history[i].getTitle()).c_str());

	}
}
//---------------------------------------------------------------------------

