//---------------------------------------------------------------------------

#ifndef MainViewH
#define MainViewH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Edge.hpp>
#include <WebView2.hpp>
#include <Winapi.ActiveX.hpp>
#include <Vcl.TitleBarCtrls.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.ToolWin.hpp>
#include <Vcl.WinXCtrls.hpp>
#include <SHDocVw.hpp>
#include <Vcl.OleCtrls.hpp>
#include <Vcl.Buttons.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Imaging.pngimage.hpp>
#include <Vcl.Menus.hpp>
#include <VCLTee.TeCanvas.hpp>
#include <System.ImageList.hpp>
#include <Vcl.ImgList.hpp>
#include <vector>
#include <utility>


#include "PageInfoUnit.h"
#include "BookmarksReader.h"
#include "BookmarksWriter.h"
#include "StringConverter.h"
#include "SettingsView.h"
#include "BookmarksManager.h"
#include "HistoryManager.h"
#include "AddBookmarkView.h"
#include "AnonymModeView.h"
#include "AboutProgramView.h"

class TWebView : public TForm
{
__published:

	TEdit *addressBar;
	TTitleBarPanel *TitleBarPanel1;
	TImage *backBtn;
	TImage *forwardBtn;
	TImage *updateBtn;
	TImage *homeBtn;
	TImage *searchBtn;
	TImage *addBookmarkBtn;
	TImage *settingsBtn;
	TImage *closeBtn;
	TImage *expandBtn;
	TImage *hideBtn;
	TImage *newTabBtn;
	TPageControl *PageControl;
	TImage *showBookmarksBtn;
	TComboBox *bookmarksBox;
	TPopupMenu *tabsPopup;
	TMenuItem *closeChoice;
	TActivityIndicator *activityIndicator;
	TImage *deleteBookmarkBtn;
	TPopupMenu *bookmarksPopup;
	TMenuItem *N1;
	TImage *disactivateAnonymModeBtn;
	TImage *anonymModeIndicatorBtn;
	TImage *activateAnonymModeBtn;
	TImage *aboutProgramBtn;
	TImageList *ImageList;
	TImage *Image2;
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall backBtnClick(TObject *Sender);
	void __fastcall forwardBtnClick(TObject *Sender);
	void __fastcall updateBtnClick(TObject *Sender);
    void __fastcall searchBtnClick(TObject *Sender);
	void __fastcall backBtnMouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y);
	void __fastcall backBtnMouseUp(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y);
	void __fastcall forwardBtnMouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y);
	void __fastcall forwardBtnMouseUp(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y);
	void __fastcall updateBtnMouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y);
	void __fastcall updateBtnMouseUp(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y);
	void __fastcall homeBtnMouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y);
	void __fastcall homeBtnMouseUp(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y);
	void __fastcall addressBarClick(TObject *Sender);
	void __fastcall homeBtnClick(TObject *Sender);
	void __fastcall searchBtnMouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y);
	void __fastcall searchBtnMouseUp(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y);
	void __fastcall settingsBtnMouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y);
	void __fastcall settingsBtnMouseUp(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y);
	void __fastcall closeBtnClick(TObject *Sender);
	void __fastcall closeBtnMouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y);
	void __fastcall closeBtnMouseUp(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y);
	void __fastcall hideBtnClick(TObject *Sender);
	void __fastcall hideBtnMouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y);
	void __fastcall hideBtnMouseUp(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y);
	void __fastcall expandBtnClick(TObject *Sender);
	void __fastcall WebBrowserTitleChange(TObject *ASender, const WideString Text);
	void __fastcall addressBarMouseLeave(TObject *Sender);
	void __fastcall newTabBtnClick(TObject *Sender);
	void __fastcall PageControlChange(TObject *Sender);
	void __fastcall PageControlMouseUp(TObject *Sender, TMouseButton Button, TShiftState Shift,
		  int X, int Y);
	void __fastcall showBookmarksBtnClick(TObject *Sender);
	void __fastcall addBookmarkBtnClick(TObject *Sender);
	void __fastcall newTabBtnMouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
		  int X, int Y);
	void __fastcall newTabBtnMouseUp(TObject *Sender, TMouseButton Button, TShiftState Shift,
		  int X, int Y);
	void __fastcall showBookmarksBtnMouseDown(TObject *Sender, TMouseButton Button,
		  TShiftState Shift, int X, int Y);
	void __fastcall showBookmarksBtnMouseUp(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y);
	void __fastcall bookmarksBoxSelect(TObject *Sender);
	void __fastcall deleteBookmarkBtnClick(TObject *Sender);
	void __fastcall settingsBtnClick(TObject *Sender);
	void __fastcall bookmarksBoxContextPopup(TObject *Sender, TPoint &MousePos, bool &Handled);
	void __fastcall closeChoiceClick(TObject *Sender);
	void __fastcall FormKeyPress(TObject *Sender, System::WideChar &Key);
	void __fastcall FormKeyDown(TObject *Sender, WORD &Key, TShiftState Shift);
	void __fastcall activateAnonymModeBtnClick(TObject *Sender);
	void __fastcall disactivateAnonymModeBtnClick(TObject *Sender);
	void __fastcall anonymModeIndicatorBtnClick(TObject *Sender);
	void __fastcall PageControlMouseMove(TObject *Sender, TShiftState Shift, int X,
          int Y);
	void __fastcall aboutProgramBtnClick(TObject *Sender);

private:

    bool isFullScreen = false;
	bool isLoaded = true;
	bool isSelectedBar = false;
	bool isAnonymMode = false;
	int tabId = 0;
	int tabPopupIndex = 0;
    int loadingTab = 0;

	const int ANIMATION_OFFSET = 3;
	const int TAB_POPUP_OFFSET = 75;

	const String NEW_TAB_CAPTION = "????? ???????";
   //	const String HOMEPAGE_URL = "https://www.google.com/";
	const String SEARCH_URL = "https://www.google.com/search?q=";
	const String TAB_SPACE = "         ";

	const std::string URL_PREFIX = "https://";
	const std::string BOOKMARKS_FILENAME = "bookmarks";

	const wchar_t* BOOKMARKS_FILE_ACCESS_WARNING = L"???? ? ?????????? ?????????, ??? ????????? ????????? ?? ?????";
	const wchar_t* MESSAGE_TITLE = L"NetBar";

public:
	__fastcall TWebView(TComponent* Owner);
	void createNewTab();
	TWebBrowser* getCurrentBrowser();
    void __fastcall DocumentComplete(TObject *ASender, _di_IDispatch const pDisp,
		  const OleVariant &URL);
	void __fastcall TitleChange(TObject *ASender, const WideString Text);
	void __fastcall NewWindow3(TObject *ASender, _di_IDispatch &ppDisp, WordBool &Cancel,
		   unsigned int val, const WideString bstrUrlContext, const WideString bstrUrl);
	void __fastcall BeforeNavigate2(TObject *ASender, _di_IDispatch const pDisp,
		  const OleVariant &URL, const OleVariant &Flags, const OleVariant &TargetFrameName,
		  const OleVariant &PostData, const OleVariant &Headers,
		  WordBool &Cancel);
	void updateBookmarksBox();
    void registerSiteVisit(std::string title, std::string url);
    void setAddBookmarkBtnVisible(bool isVisible);

    String title = "";
	String pageURL = "";
	BookmarksManager *bookmarksManager;
	HistoryManager *historyManager;
	BrowserManager *browserManager;
	StringConverter *converter;

    String homepageUrl;

};
//---------------------------------------------------------------------------
extern PACKAGE TWebView *WebView;
//---------------------------------------------------------------------------
#endif
