//---------------------------------------------------------------------------

#ifndef BrowserManagerH
#define BrowserManagerH

#include <System.Classes.hpp>
#include <utility>
#include <filesystem>
#include <fstream>
#include <string>
#include <ctype.h>

class BrowserManager
{
	private:
		const AnsiString CASHE_PATH = "Project1.exe.WebView2\\EBWebView\\Default\\Cache";
		const AnsiString BROWSER_DATA_PATH = "Project1.exe.WebView2\\EBWebView\\Default";
		const std::string DEFAULT_HOMEPAGE_URL = "https://www.google.com/";
		std::string homepageUrl;
		int getFolderSize(AnsiString folder, int &size);
		std::string readHomePageUrl(std::string path);
		bool writeHomepageUrl(std::string path, std::string newUrl);
	public:
		BrowserManager();
		int getCasheSize();
		std::string getHomepageUrl();
		void clearCashe();
		int getBrowserDataSize();
		void clearBrowserData();
        bool setHomepageUrl(std::string newUrl);
};
//---------------------------------------------------------------------------
#endif
