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
	int size = 0;
	int count = 0;
	int folCount = 0;
	FolderSize("Project1.exe.WebView2\\EBWebView\\Default\\Cache", size, count, folCount);
	casheSizeLabel->Caption = IntToStr((size / 1024 / 1024)) + " MB";
	//ShowMessage(size / 1024 / 1024);
	//ShowMessage(count);
}
//---------------------------------------------------------------------------

