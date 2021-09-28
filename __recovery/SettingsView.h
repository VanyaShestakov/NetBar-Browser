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
	TLabel *Label1;
	TLabel *Label2;
	TImage *Image1;
	void __fastcall closeBtnClick(TObject *Sender);
	void __fastcall hideBtnClick(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);
	void __fastcall clearCasheBtnClick(TObject *Sender);
	void __fastcall clearBrowserDataBtnClick(TObject *Sender);
private:	// User declarations
    const int KB_SIZE = 1024;

	const wchar_t* MESSAGE_TITLE = L"NetBar";
	const wchar_t* RESTART_WARNING = L"Для того, чтобы изменения вступили в силу, приложение сейчас перезапустится";
	const wchar_t* BROWSER_CLEANING_WARNING = L"Очистка данных браузера приведёт к удалению всех паролей, cookie файлов, кэша и др. После очистки приложение будет перезапущено. Вы действительно хотите очистить все данные браузера?";
public:		// User declarations
	__fastcall TSettingsForm(TComponent* Owner);
    void FolderSize(AnsiString Folder, int &Size, int &fCount, int &folCount);
};
//---------------------------------------------------------------------------
extern PACKAGE TSettingsForm *SettingsForm;
//---------------------------------------------------------------------------
#endif
