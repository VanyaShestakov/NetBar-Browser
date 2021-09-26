//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "SettingsView.h"
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
	BrowserManager *manager = new BrowserManager();
	int casheSize = manager->getCasheSize();
	int browserDataSize = manager->getBrowserDataSize();
	casheSizeLabel->Caption = IntToStr((casheSize / KB_SIZE / KB_SIZE)) + " MB";
	browserDataSizeLabel->Caption = IntToStr((browserDataSize / KB_SIZE / KB_SIZE)) + " MB";
	delete manager;
	//delete WebView->PageControl;

}
//---------------------------------------------------------------------------

void __fastcall TSettingsForm::clearCasheBtnClick(TObject *Sender)
{
	BrowserManager *manager = new BrowserManager();
	manager->clearCashe();
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
		Sleep(100);
		BrowserManager *manager = new BrowserManager();
		manager->clearBrowserData();
		ShellExecute(0, 0, Application->ExeName.c_str(), 0, 0, SW_SHOW);
		Application->Terminate();
	}
}
//---------------------------------------------------------------------------

