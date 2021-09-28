#include <vcl.h>
#include <vector>
#include <fstream>
#include <string>
#pragma hdrstop

//---------------------------------------------------------------------------

#include "MainView.h"
#include "PageInfoUnit.h"
#include "BookmarksReader.h"
#include "BookmarksWriter.h"
#include "StringConverter.h"
#include "SettingsView.h"

//---------------------------------------------------------------------------

#pragma package(smart_init)
#pragma resource "*.dfm"

TWebView *WebView;

//---------------------------------------------------------------------------

//START OPERATIONS//////////////////////////////////////////////////////////////

__fastcall TWebView::TWebView(TComponent* Owner)
	: TForm(Owner)
{

}

void __fastcall TWebView::FormCreate(TObject *Sender)
{
	createNewTab();
	auto bookmarks = bookmarksManager->getBookmarks();
	StringConverter *converter = new StringConverter();
	for (int i = 0; i < bookmarks.size(); i++)
	{
		bookmarksBox
			->Items
			->Add(converter->convertToSystemString(bookmarks[i].first));
	}
	delete converter;
}

//BUTTONS ANIMATION/////////////////////////////////////////////////////////////

void __fastcall TWebView::backBtnMouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
		  int X, int Y)
{
	backBtn->Top = backBtn->Top + ANIMATION_OFFSET;
}

void __fastcall TWebView::backBtnMouseUp(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y)
{
	backBtn->Top = backBtn->Top - ANIMATION_OFFSET;
}

void __fastcall TWebView::forwardBtnMouseDown(TObject *Sender, TMouseButton Button,
		  TShiftState Shift, int X, int Y)
{
	forwardBtn->Top = forwardBtn->Top + ANIMATION_OFFSET;
}

void __fastcall TWebView::forwardBtnMouseUp(TObject *Sender, TMouseButton Button, TShiftState Shift,
		  int X, int Y)
{
	forwardBtn->Top = forwardBtn->Top - ANIMATION_OFFSET;
}

void __fastcall TWebView::updateBtnMouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y)
{
	updateBtn->Top = updateBtn->Top + ANIMATION_OFFSET;
}

void __fastcall TWebView::updateBtnMouseUp(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y)
{
	updateBtn->Top = updateBtn->Top - ANIMATION_OFFSET;
}

void __fastcall TWebView::homeBtnMouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y)
{
	homeBtn->Top = homeBtn->Top + ANIMATION_OFFSET;
}

void __fastcall TWebView::homeBtnMouseUp(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y)
{
	homeBtn->Top = homeBtn->Top - ANIMATION_OFFSET;
}

void __fastcall TWebView::searchBtnMouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
		  int X, int Y)
{
	searchBtn->Top = searchBtn->Top + ANIMATION_OFFSET;
}

void __fastcall TWebView::searchBtnMouseUp(TObject *Sender, TMouseButton Button, TShiftState Shift,
		  int X, int Y)
{
	searchBtn->Top = searchBtn->Top - ANIMATION_OFFSET;
}

void __fastcall TWebView::settingsBtnMouseDown(TObject *Sender, TMouseButton Button,
		  TShiftState Shift, int X, int Y)
{
	settingsBtn->Top = settingsBtn->Top + ANIMATION_OFFSET;
}

void __fastcall TWebView::settingsBtnMouseUp(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y)
{
	settingsBtn->Top = settingsBtn->Top - ANIMATION_OFFSET;
}

void __fastcall TWebView::newTabBtnMouseDown(TObject *Sender, TMouseButton Button,
		  TShiftState Shift, int X, int Y)
{
	newTabBtn->Top = newTabBtn->Top + ANIMATION_OFFSET;
}

void __fastcall TWebView::newTabBtnMouseUp(TObject *Sender, TMouseButton Button, TShiftState Shift,
		  int X, int Y)
{
	newTabBtn->Top = newTabBtn->Top - ANIMATION_OFFSET;
}

void __fastcall TWebView::showBookmarksBtnMouseDown(TObject *Sender, TMouseButton Button,
		  TShiftState Shift, int X, int Y)
{
	showBookmarksBtn->Top = showBookmarksBtn->Top + ANIMATION_OFFSET;
}

void __fastcall TWebView::showBookmarksBtnMouseUp(TObject *Sender, TMouseButton Button,
		  TShiftState Shift, int X, int Y)
{
	showBookmarksBtn->Top = showBookmarksBtn->Top - ANIMATION_OFFSET;
}

void __fastcall TWebView::closeBtnMouseDown(TObject *Sender, TMouseButton Button,
		  TShiftState Shift, int X, int Y)
{
	closeBtn->Top = closeBtn->Top + ANIMATION_OFFSET;
}

void __fastcall TWebView::closeBtnMouseUp(TObject *Sender, TMouseButton Button, TShiftState Shift,
		  int X, int Y)
{
	closeBtn->Top = closeBtn->Top - ANIMATION_OFFSET;
}


void __fastcall TWebView::hideBtnMouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
		  int X, int Y)
{
	hideBtn->Top = hideBtn->Top + ANIMATION_OFFSET;
}

void __fastcall TWebView::hideBtnMouseUp(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y)
{
	hideBtn->Top = hideBtn->Top - ANIMATION_OFFSET;
}

//WINDOW BUTTONS////////////////////////////////////////////////////////////////

void __fastcall TWebView::hideBtnClick(TObject *Sender)
{
	Application->Minimize();
}

void __fastcall TWebView::closeBtnClick(TObject *Sender)
{
   Application->Terminate();
}


void __fastcall TWebView::expandBtnClick(TObject *Sender)
{
	if (isFullScreen)
	{
		WebView->WindowState = wsNormal;
		isFullScreen = false;
	}
	else
	{
		WebView->WindowState = wsMaximized;
		isFullScreen = true;
	}
}

//BROWSER NAVIGATION ///////////////////////////////////////////////////////////

void __fastcall TWebView::backBtnClick(TObject *Sender)
{
	getCurrentBrowser()->GoBack();
}

void __fastcall TWebView::forwardBtnClick(TObject *Sender)
{
	getCurrentBrowser()->GoForward();
}

void __fastcall TWebView::updateBtnClick(TObject *Sender)
{
	getCurrentBrowser()->Refresh();
}

void __fastcall TWebView::searchBtnClick(TObject *Sender)
{
	StringConverter *converter = new StringConverter();
	std::string request = converter->convertToStdString(addressBar->Text);
	if (request.rfind(URL_PREFIX, 0) == 0)
	{
		getCurrentBrowser()->Navigate(converter->convertToSystemString(request));
	}
	else
	{
		getCurrentBrowser()->Navigate(SEARCH_URL + addressBar->Text);
	}
	delete converter;
}
void __fastcall TWebView::homeBtnClick(TObject *Sender)
{
	getCurrentBrowser()->Navigate(HOMEPAGE_URL);
}

void __fastcall TWebView::addressBarClick(TObject *Sender)
{
	addressBar->Text = pageURL;
	if (!isSelectedBar)
	{
		addressBar->SelectAll();
	}
	isSelectedBar = true;
}

void __fastcall TWebView::addressBarMouseLeave(TObject *Sender)
{
	isSelectedBar = false;
}

//BROWSER EVENTS////////////////////////////////////////////////////////////////

void __fastcall TWebView::WebBrowserTitleChange(TObject *ASender, const WideString Text)
{
	title = Text;
	addressBar->Text = title;
}

void __fastcall TWebView::DocumentComplete(TObject *ASender, _di_IDispatch const pDisp, const OleVariant &URL)
{
	pageURL = URL;
	PageControl
		->ActivePage
		->Caption = TAB_SPACE + title + TAB_SPACE;
	isLoaded = true;
	activityIndicator->StopAnimation();
	activityIndicator->Visible = false;
	StringConverter *converter = new StringConverter();
	if (bookmarksManager->contains((converter->convertToStdString(URL))))
	{
		deleteBookmarkBtn->Visible = true;
		addBookmarkBtn->Visible = false;
	}
	else
	{
		deleteBookmarkBtn->Visible = false;
		addBookmarkBtn->Visible = true;
	}
	delete converter;
}

void __fastcall TWebView::NewWindow3(TObject *ASender, _di_IDispatch &ppDisp, WordBool &Cancel,
		  unsigned int val, const WideString bstrUrlContext, const WideString bstrUrl)
{
	createNewTab();
	getCurrentBrowser()->Navigate(bstrUrl);
	Cancel = true;
}

void __fastcall TWebView::TitleChange(TObject *ASender, const WideString Text)
{
	title = Text;
	addressBar->Text = title;
}

//TABS//////////////////////////////////////////////////////////////////////////

void __fastcall TWebView::newTabBtnClick(TObject *Sender)
{
	if (isLoaded)
	{
		createNewTab();
	}
}

void TWebView::createNewTab()
{
	TTabSheet *tab = new TTabSheet(PageControl);
	tab->Visible = true;
	tab->Caption = NEW_TAB_CAPTION;
	tab->PageControl = PageControl;
	PageControl->ActivePage = tab;
	tab->Name = "tab" + String(tabId);

	TWebBrowser *browser = new TWebBrowser(PageControl);
	browser->SelectedEngine = TWebBrowser::TSelectedEngine::EdgeOnly;
	browser->TOleControl::Parent = tab;
	browser->Align = alClient;
	browser->Navigate(HOMEPAGE_URL);
	tab->Tag = Integer(browser);
	browser->TOleControl::Name = tab->Name + "_browser";

	browser->OnDocumentComplete = DocumentComplete;
	browser->OnNewWindow3 = NewWindow3;
	browser->OnTitleChange = TitleChange;
	browser->OnBeforeNavigate2 = BeforeNavigate2;

	tabId++;
}

void __fastcall TWebView::PageControlChange(TObject *Sender)
{
	title = getCurrentBrowser()->LocationName;
	pageURL = getCurrentBrowser()->LocationURL;
	addressBar->Text = title;
	StringConverter *converter = new StringConverter();
	if (bookmarksManager->contains(converter->convertToStdString(pageURL)))
	{
		deleteBookmarkBtn->Visible = true;
		addBookmarkBtn->Visible = false;
	}
	else
	{
		deleteBookmarkBtn->Visible = false;
		addBookmarkBtn->Visible = true;
	}
	delete converter;
}

void __fastcall TWebView::PageControlMouseUp(TObject *Sender, TMouseButton Button,
		  TShiftState Shift, int X, int Y)
{
	if (Button == mbRight && PageControl->PageCount > 1)
	{
		tabPopupIndex = PageControl->IndexOfTabAt(X,Y);
		TPoint point = GetClientOrigin();
		tabsPopup->Popup(X + point.X, Y + point.Y + TAB_POPUP_OFFSET);
	}
}

//BOOKMARKS/////////////////////////////////////////////////////////////////////

TWebBrowser* TWebView::getCurrentBrowser()
{
	return (TWebBrowser*) PageControl
		->ActivePage
		->FindChildControl(PageControl->ActivePage->Name + "_browser");
}


void __fastcall TWebView::showBookmarksBtnClick(TObject *Sender)
{
    bookmarksBox->DroppedDown = true;
}

void __fastcall TWebView::addBookmarkBtnClick(TObject *Sender)
{

	if (isLoaded /* TODO  && !bookmarkContains(convertToStdString(pageURL))*/)
	{
		StringConverter *converter = new StringConverter();
		bool isOpenFile = bookmarksManager
			->addBookmark(converter->convertToStdString(title),
						  converter->convertToStdString(pageURL));
		delete converter;
		if (!isOpenFile)
		{
			Application
			->MessageBox(BOOKMARKS_FILE_ACCESS_WARNING,
						 MESSAGE_TITLE,
						 MB_OK | MB_ICONWARNING);
		}
		updateBookmarksBox();
		addBookmarkBtn->Visible = false;
		deleteBookmarkBtn->Visible = true;
	}
}
 /*
void TWebView::rewriteBookmarks()
{
	BookmarksWriter *writer = new BookmarksWriter();
	bool isOpenFile = writer->writeBookmarks(bookmarks, BOOKMARKS_FILENAME);
	delete writer;
	if (!isOpenFile) {
		Application
		->MessageBox(BOOKMARKS_FILE_ACCESS_WARNING,
					 MESSAGE_TITLE,
					 MB_OK | MB_ICONWARNING);
	}
}  */
	/*
bool TWebView::bookmarkContains(std::string url)
{
	for (int i = 0; i < bookmarks.size(); ++i)
	{
	   if (bookmarks[i].second == url)
	   {
		   return true;
	   }
	}
	return false;
}
	*/
void TWebView::updateBookmarksBox()
{
	StringConverter *converter = new StringConverter();
	bookmarksBox->Clear();
	auto bookmarks = bookmarksManager->getBookmarks();
	for (int i = 0; i < bookmarks.size(); i++)
	{
		bookmarksBox
			->Items
			->Add(converter->convertToSystemString(bookmarks[i].first));
	}
	delete converter;
}

void __fastcall TWebView::BeforeNavigate2(TObject *ASender, _di_IDispatch const pDisp,
		  const OleVariant &URL, const OleVariant &Flags, const OleVariant &TargetFrameName,
		  const OleVariant &PostData, const OleVariant &Headers,
		  WordBool &Cancel)
{
	isLoaded = false;
	activityIndicator->StartAnimation();
	activityIndicator->Visible = true;
}

void __fastcall TWebView::bookmarksBoxSelect(TObject *Sender)
{
	StringConverter *converter = new StringConverter();
	auto bookmarks = bookmarksManager->getBookmarks();
	getCurrentBrowser()
		->Navigate(converter->convertToSystemString(bookmarks[bookmarksBox->ItemIndex].second));
	delete converter;
}

void __fastcall TWebView::deleteBookmarkBtnClick(TObject *Sender)
{
    if (isLoaded /* TODO  && !bookmarkContains(convertToStdString(pageURL))*/)
	{
		StringConverter *converter = new StringConverter();
	   /*	int index = 0;
		while (converter->convertToStdString(pageURL) != bookmarks[index].second)
		{
			index++;
			if (index == bookmarks.size())
			{
				index = -1;
				break;
			}
		}
		if (index != -1)
		{
			bookmarks.erase(bookmarks.begin() + index);
			rewriteBookmarks();
			updateBookmarksBox();
			addBookmarkBtn->Visible = true;
			deleteBookmarkBtn->Visible = false;
		}     */

		bool isOpenFile = bookmarksManager->removeBookmark(converter->convertToStdString(pageURL));
        if (!isOpenFile)
		{
			Application
				->MessageBox(BOOKMARKS_FILE_ACCESS_WARNING,
						 MESSAGE_TITLE,
						 MB_OK | MB_ICONWARNING);
		}
        updateBookmarksBox();
		addBookmarkBtn->Visible = true;
		deleteBookmarkBtn->Visible = false;
		delete converter;
	}
}

void __fastcall TWebView::settingsBtnClick(TObject *Sender)
{
	SettingsForm->ShowModal();
}

void __fastcall TWebView::bookmarksBoxContextPopup(TObject *Sender, TPoint &MousePos,
		  bool &Handled)
{
	/*
	int index = bookmarksBox->ItemIndex;//ItemAtPos(MousePos, true);
	StringConverter *converter = new StringConverter();
	if (converter->convertToStdString(pageURL) == bookmarks[index].second) {
		addBookmarkBtn->Visible = true;
		deleteBookmarkBtn->Visible = false;
	}
	bookmarks.erase(bookmarks.begin() + index);
	rewriteBookmarks();
	updateBookmarksBox();
		   */
}



void __fastcall TWebView::closeChoiceClick(TObject *Sender)
{
	PageControl->Pages[tabPopupIndex]->Free();
	title = getCurrentBrowser()->LocationName;
	pageURL = getCurrentBrowser()->LocationURL;
	addressBar->Text = title;
	StringConverter *converter = new StringConverter();
	if (bookmarksManager->contains(converter->convertToStdString(pageURL)))
	{
		deleteBookmarkBtn->Visible = true;
		addBookmarkBtn->Visible = false;
	}
	else
	{
		deleteBookmarkBtn->Visible = false;
		addBookmarkBtn->Visible = true;
	}
	delete converter;
}
//---------------------------------------------------------------------------
