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
//---------------------------------------------------------------------------
