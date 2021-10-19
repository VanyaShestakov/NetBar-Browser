//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "AboutProgramView.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TAboutProgramForm *AboutProgramForm;
//---------------------------------------------------------------------------
__fastcall TAboutProgramForm::TAboutProgramForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TAboutProgramForm::addBtnClick(TObject *Sender)
{
    AboutProgramForm->Close();
}
//---------------------------------------------------------------------------
