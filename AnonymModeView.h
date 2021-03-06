//---------------------------------------------------------------------------

#ifndef AnonymModeViewH
#define AnonymModeViewH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Buttons.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.pngimage.hpp>
//---------------------------------------------------------------------------
class TAnonymModeForm : public TForm
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
	__fastcall TAnonymModeForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TAnonymModeForm *AnonymModeForm;
//---------------------------------------------------------------------------
#endif
