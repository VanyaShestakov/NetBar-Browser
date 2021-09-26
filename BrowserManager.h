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

		int getFolderSize(AnsiString folder, int &size);
	public:
		int getCasheSize();
		void clearCashe();




};
//---------------------------------------------------------------------------
#endif
