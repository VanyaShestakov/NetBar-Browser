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
	void __fastcall closeBtnClick(TObject *Sender);
	void __fastcall hideBtnClick(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TSettingsForm(TComponent* Owner);
    void FolderSize(AnsiString Folder, int &Size, int &fCount, int &folCount);
};
//---------------------------------------------------------------------------
extern PACKAGE TSettingsForm *SettingsForm;
//---------------------------------------------------------------------------
#endif
