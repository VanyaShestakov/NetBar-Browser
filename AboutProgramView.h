//---------------------------------------------------------------------------

#ifndef AboutProgramViewH
#define AboutProgramViewH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Buttons.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.pngimage.hpp>
//---------------------------------------------------------------------------
class TAboutProgramForm : public TForm
{
__published:	// IDE-managed Components
	TBitBtn *addBtn;
	TImage *Image1;
	TLabel *settingsTitle;
	TLabel *casheSizeTitle;
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label3;
	void __fastcall addBtnClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TAboutProgramForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TAboutProgramForm *AboutProgramForm;
//---------------------------------------------------------------------------
#endif
