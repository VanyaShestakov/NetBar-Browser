//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "AnonymModeView.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TAnonymModeForm *AnonymModeForm;
//---------------------------------------------------------------------------
__fastcall TAnonymModeForm::TAnonymModeForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TAnonymModeForm::addBtnClick(TObject *Sender)
{
    AnonymModeForm->Close();
}
//---------------------------------------------------------------------------
