//---------------------------------------------------------------------------

#ifndef SettingsViewH
#define SettingsViewH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.TitleBarCtrls.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.pngimage.hpp>
#include <Vcl.Buttons.hpp>
#include "BrowserManager.h"
#include "MainView.h"
//---------------------------------------------------------------------------
class TSettingsForm : public TForm
{
__published:	// IDE-managed Components
	TImage *hideBtn;
	TImage *closeBtn;
	TLabel *settingsTitle;
	TLabel *casheTitle;
	TLabel *casheSizeTitle;
	TLabel *casheSizeLabel;
	TBitBtn *clearCasheBtn;
	TLabel *browserDataTitle;
	TLabel *browserDataSizeTitle;
	TLabel *browserDataSizeLabel;
	TBitBtn *clearBrowserDataBtn;
	TLabel *browserHistoryTitle;
	TLabel *browserHistorySizeTitle;
	TLabel *browserHistorySizeLabel;
	TBitBtn *clearBrowserHistoryBtn;
	TLabel *bookmarksTitle;
	TLabel *bookmarksAmountTitle;
	TLabel *Label5;
	TBitBtn *clearBookmarksBtn;
	TLabel *bookmarksAmountLabel;
	TListBox *historyBox;
	TLabel *Label3;
	TEdit *homepageUrlEdit;
	TBitBtn *changeHomepageBtn;
	TLabel *Label1;
	TBitBtn *showHistoryBtn;
	TBitBtn *BitBtn;
	void __fastcall closeBtnClick(TObject *Sender);
	void __fastcall hideBtnClick(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);
	void __fastcall clearCasheBtnClick(TObject *Sender);
	void __fastcall clearBrowserDataBtnClick(TObject *Sender);
	void __fastcall clearBookmarksBtnClick(TObject *Sender);
	void __fastcall clearBrowserHistoryBtnClick(TObject *Sender);
	void __fastcall showHistoryBtnClick(TObject *Sender);
	void __fastcall historyBoxDblClick(TObject *Sender);
	void __fastcall changeHomepageBtnClick(TObject *Sender);
	void __fastcall historyBoxMouseUp(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y);
private:	// User declarations

	BrowserManager *browserManager = new BrowserManager();
	bool isOpenedHistory;


	const int KB_SIZE = 1024;
	const int EXTENDED_HEIGHT = 840;
	const int DEFAULT_HEIGHT = 600;
	const int EXTENDED_WIDTH = 1050;
	const int DEFAULT_WIDTH = 500;

	const wchar_t* MESSAGE_TITLE = L"NetBar";
	const wchar_t* RESTART_WARNING = L"Для того, чтобы изменения вступили в силу, приложение сейчас перезапустится";
	const wchar_t* BROWSER_CLEANING_WARNING = L"Очистка данных браузера приведёт к удалению всех паролей, cookie файлов, кэша и др. После очистки приложение будет перезапущено. Вы действительно хотите очистить все данные браузера?";
	const wchar_t* BOOKMARKS_CLEANING_WARNING = L"Вы действительно хотите удалить все закладки безвозвратно";
	const wchar_t* HOMEPAGE_WARNING = L"Внутренние файлы повреждены, изменения сохранены не будут";
	const wchar_t* HOMEPAGE_SUCCESS = L"Домашняя страница успешно обновлена";
public:		// User declarations
	__fastcall TSettingsForm(TComponent* Owner);
	void FolderSize(AnsiString Folder, int &Size, int &fCount, int &folCount);
	void updateHistoryBox();
};
//---------------------------------------------------------------------------
extern PACKAGE TSettingsForm *SettingsForm;
//---------------------------------------------------------------------------
#endif
