#include <vcl.h>
#include <vector>
#include <fstream>
#include <string>
#pragma hdrstop

#include "MainView.h"

//---------------------------------------------------------------------------

#pragma package(smart_init)
#pragma resource "*.dfm"

TWebView *WebView;

//---------------------------------------------------------------------------

//START OPERATIONS//////////////////////////////////////////////////////////////

__fastcall TWebView::TWebView(TComponent* Owner)
	: TForm(Owner)
{
    bookmarksManager = new BookmarksManager();
	historyManager = new HistoryManager();
	browserManager = new BrowserManager();
	converter = new StringConverter();
	homepageUrl = converter->convertToSystemString(browserManager->getHomepageUrl());
}

void __fastcall TWebView::FormCreate(TObject *Sender)
{
	createNewTab();
	auto bookmarks = bookmarksManager->getBookmarks();
	for (int i = 0; i < bookmarks.size(); i++)
	{
		bookmarksBox
			->Items
			->Add(converter->convertToSystemString(bookmarks[i].first));
	}
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
	std::string request = converter->convertToStdString(addressBar->Text);
	if (request.rfind(URL_PREFIX, 0) == 0)
	{
		getCurrentBrowser()->Navigate(converter->convertToSystemString(request));
	}
	else
	{
		getCurrentBrowser()->Navigate(SEARCH_URL + addressBar->Text);
	}
}
void __fastcall TWebView::homeBtnClick(TObject *Sender)
{
	getCurrentBrowser()->Navigate(homepageUrl);
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

void __fastcall TWebView::TitleChange(TObject *ASender, const WideString Text)
{
	title = Text;
	if (PageControl->ActivePageIndex == loadingTab)
	{
		addressBar->Text = title;
	}
	PageControl->Pages[loadingTab]->Caption = TAB_SPACE + title + TAB_SPACE;
}

void __fastcall TWebView::DocumentComplete(TObject *ASender, _di_IDispatch const pDisp, const OleVariant &URL)
{
	pageURL = URL;
	isLoaded = true;
	activityIndicator->StopAnimation();
	updateBtn->Visible = true;
	activityIndicator->Visible = false;
	if (!isAnonymMode)
	{
		registerSiteVisit(converter->convertToStdString(title), converter->convertToStdString(URL));
	}
	if (bookmarksManager->contains((converter->convertToStdString(URL))))
	{
		setAddBookmarkBtnVisible(false);
	}
	else
	{
		setAddBookmarkBtnVisible(true);
	}
}

void TWebView::registerSiteVisit(std::string title, std::string url)
{
	time_t now = time(0);
	std::string stringTime = ctime(&now);
	historyManager->addSiteVisit(stringTime, title, url);
}

void TWebView::setAddBookmarkBtnVisible(bool isVisible)
{
	deleteBookmarkBtn->Visible = !isVisible;
	addBookmarkBtn->Visible = isVisible;
}

void __fastcall TWebView::NewWindow3(TObject *ASender, _di_IDispatch &ppDisp, WordBool &Cancel,
		  unsigned int val, const WideString bstrUrlContext, const WideString bstrUrl)
{
	createNewTab();
	getCurrentBrowser()->Navigate(bstrUrl);
	Cancel = true;
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
	browser->Width = tab->Width;
    browser->Height = tab->Height;
	browser->Align = alClient;
	browser->Navigate(homepageUrl);
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
	if (bookmarksManager->contains(converter->convertToStdString(pageURL)))
	{
		setAddBookmarkBtnVisible(false);
	}
	else
	{
		setAddBookmarkBtnVisible(true);
	}
}

void __fastcall TWebView::PageControlMouseUp(TObject *Sender, TMouseButton Button,
		  TShiftState Shift, int X, int Y)
{
	if (Button == mbLeft)
	{
		TRect R = PageControl->TabRect(PageControl->ActivePage->TabIndex);
		if (PtInRect(Classes::Rect(R.Left, R.Top, R.Left + 20, R.Top + 16),
			Classes::Point(X, Y)) &&
			PageControl->PageCount > 1)
		{
			int index = PageControl->IndexOfTabAt(X, Y);
			int activePageIndex = PageControl->ActivePageIndex;
			PageControl->Pages[index]->Free();
			isLoaded = true;
			activityIndicator->StopAnimation();
			updateBtn->Visible = true;
            activityIndicator->Visible = false;
			PageControl->ActivePageIndex = index - 1;
			title = getCurrentBrowser()->LocationName;
			pageURL = getCurrentBrowser()->LocationURL;
			addressBar->Text = title;
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
		}

	}

	if (Button == mbRight && PageControl->PageCount > 1)
	{
		tabPopupIndex = PageControl->IndexOfTabAt(X, Y);
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
    if (isLoaded)
	{
		AddBookmarkForm->ShowModal();
	}
/*
	if (isLoaded)
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
	}  */
}

void TWebView::updateBookmarksBox()
{
	bookmarksBox->Clear();
	auto bookmarks = bookmarksManager->getBookmarks();
	for (int i = 0; i < bookmarks.size(); i++)
	{
		bookmarksBox
			->Items
			->Add(converter->convertToSystemString(bookmarks[i].first));
	}
}

void __fastcall TWebView::BeforeNavigate2(TObject *ASender, _di_IDispatch const pDisp,
		  const OleVariant &URL, const OleVariant &Flags, const OleVariant &TargetFrameName,
		  const OleVariant &PostData, const OleVariant &Headers,
		  WordBool &Cancel)
{
	loadingTab = PageControl->ActivePageIndex;
	isLoaded = false;
	activityIndicator->StartAnimation();
	activityIndicator->Visible = true;
	updateBtn->Visible = false;
}

void __fastcall TWebView::bookmarksBoxSelect(TObject *Sender)
{
	auto bookmarks = bookmarksManager->getBookmarks();
	getCurrentBrowser()
		->Navigate(converter->convertToSystemString(bookmarks[bookmarksBox->ItemIndex].second));
}

void __fastcall TWebView::deleteBookmarkBtnClick(TObject *Sender)
{
	if (isLoaded)
	{
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
}

//---------------------------------------------------------------------------

void __fastcall TWebView::FormKeyPress(TObject *Sender, System::WideChar &Key)
{
	if(Key == 13)
	{
        std::string request = converter->convertToStdString(addressBar->Text);
		if (request.rfind(URL_PREFIX, 0) == 0)
		{
			getCurrentBrowser()->Navigate(converter->convertToSystemString(request));
		}
		else
		{
			getCurrentBrowser()->Navigate(SEARCH_URL + addressBar->Text);
		}
	}
}
//---------------------------------------------------------------------------

void __fastcall TWebView::FormKeyDown(TObject *Sender, WORD &Key, TShiftState Shift)

{
	if (Shift.Contains(ssAlt))
	{
	   //	ShowMessage("");
		Key = 0;
	}
}

LRESULT WINAPI WndProc(HWND hwnd, UINT msg, WPARAM wparam, LPARAM lparam) {
	ShowMessage("");
	switch (msg)
    {
    case WM_SYSKEYDOWN:
		ShowMessage("");
		break;

    case WM_SYSCHAR:
		ShowMessage("");
		break;

    case WM_SYSKEYUP:
		ShowMessage("");
        break;

    case WM_KEYDOWN:
		ShowMessage("");
        break;

    case WM_KEYUP:
		ShowMessage("");
		break;

    case WM_CHAR:
		ShowMessage("");
        break;

    /* Handle other messages (not shown) */

	}
	return DefWindowProc(hwnd, msg, wparam, lparam);
}
//---------------------------------------------------------------------------

void __fastcall TWebView::activateAnonymModeBtnClick(TObject *Sender)
{
	activateAnonymModeBtn->Visible = false;
	disactivateAnonymModeBtn->Visible = true;
	anonymModeIndicatorBtn->Visible = true;
	isAnonymMode = true;
}
//---------------------------------------------------------------------------

void __fastcall TWebView::disactivateAnonymModeBtnClick(TObject *Sender)
{
	activateAnonymModeBtn->Visible = true;
	disactivateAnonymModeBtn->Visible = false;
	anonymModeIndicatorBtn->Visible = false;
	isAnonymMode = false;
}
//---------------------------------------------------------------------------

void __fastcall TWebView::anonymModeIndicatorBtnClick(TObject *Sender)
{
    AnonymModeForm->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TWebView::PageControlMouseMove(TObject *Sender, TShiftState Shift,
		  int X, int Y)
{
	TRect R = PageControl->TabRect(PageControl->IndexOfTabAt(X, Y));
	if (PtInRect(Classes::Rect(R.Left, R.Top, R.Left + 20, R.Top + 16), Classes::Point(X, Y))) {
		PageControl->Cursor = crHandPoint;
	}
	else
	{
        PageControl->Cursor = crDefault;
    }
}
//---------------------------------------------------------------------------

void __fastcall TWebView::aboutProgramBtnClick(TObject *Sender)
{
    AboutProgramForm->ShowModal();
}
//---------------------------------------------------------------------------

