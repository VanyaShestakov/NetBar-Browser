//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "AddBookmarkView.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TAddBookmarkForm *AddBookmarkForm;
//---------------------------------------------------------------------------
__fastcall TAddBookmarkForm::TAddBookmarkForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TAddBookmarkForm::cancelBtnClick(TObject *Sender)
{
	AddBookmarkForm->Close();
}
//---------------------------------------------------------------------------
void __fastcall TAddBookmarkForm::addBtnClick(TObject *Sender)
{
	StringConverter *converter = new StringConverter();

	bool isOpenFile = WebView->bookmarksManager
		->addBookmark(converter->convertToStdString(titleEdit->Text.Trim()),
					  converter->convertToStdString(WebView->pageURL));
	delete converter;
	if (!isOpenFile)
	{
		Application
		->MessageBox(BOOKMARKS_FILE_ACCESS_WARNING,
					 MESSAGE_TITLE,
					 MB_OK | MB_ICONWARNING);
	}
	WebView->updateBookmarksBox();
	WebView->addBookmarkBtn->Visible = false;
	WebView->deleteBookmarkBtn->Visible = true;
	AddBookmarkForm->Close();
}
//---------------------------------------------------------------------------
void __fastcall TAddBookmarkForm::FormShow(TObject *Sender)
{
	titleEdit->Text = WebView->title;
}
//---------------------------------------------------------------------------
void __fastcall TAddBookmarkForm::titleEditChange(TObject *Sender)
{
	StringConverter *converter = new StringConverter();
	std::string title = converter->convertToStdString(titleEdit->Text.Trim());
	addBtn->Enabled =
		!WebView->bookmarksManager->titleExists(title) &&
		title != "";
}

//---------------------------------------------------------------------------
