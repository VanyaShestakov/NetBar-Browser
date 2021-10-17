//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
//---------------------------------------------------------------------------
#include <Vcl.Styles.hpp>
#include <Vcl.Themes.hpp>
USEFORM("MainView.cpp", WebView);
USEFORM("SettingsView.cpp", SettingsForm);
USEFORM("AddBookmarkView.cpp", AddBookmarkForm);
USEFORM("AnonymModeView.cpp", AnonymModeForm);
//---------------------------------------------------------------------------
int WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR, int)
{
	try
	{
		Application->Initialize();
		Application->MainFormOnTaskBar = true;
		Application->Title = "U";
		Application->CreateForm(__classid(TWebView), &WebView);
		Application->CreateForm(__classid(TSettingsForm), &SettingsForm);
		Application->CreateForm(__classid(TAddBookmarkForm), &AddBookmarkForm);
		Application->CreateForm(__classid(TAnonymModeForm), &AnonymModeForm);
		Application->Run();
	}
	catch (Exception &exception)
	{
		Application->ShowException(&exception);
	}
	catch (...)
	{
		try
		{
			throw Exception("");
		}
		catch (Exception &exception)
		{
			Application->ShowException(&exception);
		}
	}
	return 0;
}
//---------------------------------------------------------------------------
