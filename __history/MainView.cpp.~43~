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
	BookmarksReader *reader = new BookmarksReader();
	bookmarks = reader->readBookmarks("test.txt");
	for (int i = 0; i < bookmarks.size(); i++)
	{
		bookmarksBox->Items->Add(bookmarks[i].first.c_str());
	}
	//activityIndicator->StartAnimation();
}


	 /*

void __fastcall TWebView::TabControlDrawTab(TCustomTabControl *Control, int TabIndex,
		  const TRect &Rect, bool Active)
{
	const int size = 15;
	TCanvas *canv = Control->Canvas;
    canv->FillRect(Rect);

	canv->Brush->Color = clBtnFace;
	String AText = ((TTabControl*)Control)->Tabs->Strings[TabIndex];
    TPoint APoint;
    APoint.x = (Rect.Right - Rect.Left) / 2 - canv->TextWidth(AText) / 2;
	APoint.y = (Rect.Bottom - Rect.Top) / 2 - canv->TextHeight(AText) / 2;
    canv->TextRect(Rect, Rect.Left + APoint.x, Rect.Top + APoint.y, AText);

    // ћожешь рисовать что-то более навороченное
    canv->Brush->Color = clRed;
    TRect r = Classes::Rect(Rect.Right - size - 4, Rect.Top + 2, Rect.Right - 2, Rect.Top + size + 4);
    canv->Pen->Color = clWhite;
    canv->Rectangle(r);
}
//---------------------------------------------------------------------------

void __fastcall TWebView::TabControlMouseDown(TObject *Sender, TMouseButton Button,
		  TShiftState Shift, int X, int Y)
{
	const int size = 15;
    TTabControl *tc = dynamic_cast<TTabControl*>(Sender);
    if(Button == mbLeft)
    {
		TPoint mousePos;
		GetCursorPos(&mousePos);
        TTCHitTestInfo hti;
        hti.pt = tc->ScreenToClient(mousePos);

        int ret = SendMessage(tc->Handle, TCM_HITTEST, 0, (LPARAM)&hti);
        if(hti.flags & TCHT_ONITEM)
        {
            if(tc->TabIndex == ret)
            {
                TRect r = tc->TabRect(tc->TabIndex);
				if(PtInRect(Rect(r.Right - size - 4, r.Top + 2, r.Right - 2, r.Top + size + 4),
							hti.pt)) // «десь делай с табом все, что захочешь...
                {
					ShowMessage("close tab #");
                }
            }
        }
    }
}

	 */

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
	AnsiString str = addressBar->Text;
	std::string request = str.c_str();
	if (request.rfind(URL_PREFIX, 0) == 0)
	{
		getCurrentBrowser()->Navigate(str);
	}
	else
	{
		getCurrentBrowser()->Navigate(SEARCH_URL + addressBar->Text);
	}

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
	PageControl->ActivePage->Caption = TAB_SPACE + title + TAB_SPACE;
	isLoaded = true;
	activityIndicator->StopAnimation();
	activityIndicator->Visible = false;
	if (bookmarkContains(convertToStdString(URL)))
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
	if (bookmarkContains(convertToStdString(pageURL)))
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

void __fastcall TWebView::PageControlMouseUp(TObject *Sender, TMouseButton Button,
		  TShiftState Shift, int X, int Y)
{
	if (Button == mbRight && PageControl->PageCount > 1)
	{
		int i = PageControl->IndexOfTabAt(X,Y);
		PageControl->Pages[i]->Free();
	}
}

//BOOKMARKS/////////////////////////////////////////////////////////////////////

TWebBrowser* TWebView::getCurrentBrowser()
{
	return (TWebBrowser*) PageControl->ActivePage->FindChildControl(PageControl->ActivePage->Name + "_browser");
}


void __fastcall TWebView::showBookmarksBtnClick(TObject *Sender)
{
    bookmarksBox->DroppedDown = true;
}

void __fastcall TWebView::addBookmarkBtnClick(TObject *Sender)
{
	if (isLoaded && !bookmarkContains(convertToStdString(pageURL)))
	{
		rewriteBookmarks();
		updateBookmarksBox();
		addBookmarkBtn->Visible = false;
		deleteBookmarkBtn->Visible = true;
	}
}

void TWebView::rewriteBookmarks()
{
	BookmarksWriter *writer = new BookmarksWriter();
	std::pair<std::string, std::string> pair;
	pair.first = convertToStdString(title);
	pair.second = convertToStdString(pageURL);
	bookmarks.push_back(pair);
	writer->writeBookmarks(bookmarks, "test.txt");
}

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

std::string TWebView::convertToStdString(String str)
{
	AnsiString ansiStr = str;
	return ansiStr.c_str();
}

void TWebView::updateBookmarksBox()
{
	bookmarksBox->Clear();
	for (int i = 0; i < bookmarks.size(); i++)
	{
		bookmarksBox->Items->Add(bookmarks[i].first.c_str());
	}
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
	getCurrentBrowser()->Navigate(bookmarks[bookmarksBox->ItemIndex].second.c_str());
}
//---------------------------------------------------------------------------

void __fastcall TWebView::deleteBookmarkBtnClick(TObject *Sender)
{
	addBookmarkBtn->Visible = true;
	deleteBookmarkBtn->Visible = false;
}
//---------------------------------------------------------------------------



