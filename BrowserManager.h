//---------------------------------------------------------------------------

#ifndef BrowserManagerH
#define BrowserManagerH

#include <System.Classes.hpp>
#include <utility>
#include <filesystem>

class BrowserManager
{
	private:
		const AnsiString CASHE_PATH = "Project1.exe.WebView2\\EBWebView\\Default\\Cache";
		const AnsiString BROWSER_DATA_PATH = "Project1.exe.WebView2\\EBWebView\\Default";

		int getFolderSize(AnsiString folder, int &size);
	public:
		int getCasheSize();
		void clearCashe();
		int getBrowserDataSize();
        void clearBrowserData();
};
//---------------------------------------------------------------------------
#endif
