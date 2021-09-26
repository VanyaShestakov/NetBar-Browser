//---------------------------------------------------------------------------

#ifndef BrowserManagerH
#define BrowserManagerH

#include <System.Classes.hpp>

class BrowserManager
{
	private:
		const AnsiString CASHE_PATH = "Project1.exe.WebView2\\EBWebView\\Default\\Cache";

		int getFolderSize(AnsiString folder, int &size);
	public:
        int getCasheSize();




};
//---------------------------------------------------------------------------
#endif
