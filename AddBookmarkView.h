//---------------------------------------------------------------------------

#ifndef AddBookmarkViewH
#define AddBookmarkViewH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Buttons.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.pngimage.hpp>

#include <utility>
#include <string>
#include <regex>
#include "MainView.h"
//---------------------------------------------------------------------------
class TAddBookmarkForm : public TForm
{
__published:	// IDE-managed Components
	TEdit *titleEdit;
	TBitBtn *addBtn;
	TBitBtn *cancelBtn;
	TLabel *casheSizeTitle;
	void __fastcall cancelBtnClick(TObject *Sender);
	void __fastcall addBtnClick(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);
	void __fastcall titleEditChange(TObject *Sender);
private:	// User declarations
	const wchar_t* BOOKMARKS_FILE_ACCESS_WARNING = L"???? ? ?????????? ?????????, ??? ????????? ????????? ?? ?????";
	const wchar_t* MESSAGE_TITLE = L"NetBar";
public:		// User declarations
	__fastcall TAddBookmarkForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TAddBookmarkForm *AddBookmarkForm;
//---------------------------------------------------------------------------
#endif
