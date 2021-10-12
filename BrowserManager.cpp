//---------------------------------------------------------------------------

#pragma hdrstop

#include "BrowserManager.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)


BrowserManager::BrowserManager()
{
	homepageUrl = readHomePageUrl("homepage");
	if (homepageUrl.empty())
	{
		homepageUrl = DEFAULT_HOMEPAGE_URL;
	}
}

int BrowserManager::getFolderSize(AnsiString folder, int &size)
{
	TSearchRec searchRec;
	if (folder[folder.Length()] == '\\')
	{
		folder.SetLength(folder.Length() - 1);
	}

	if (FindFirst(folder + "\\*.*", faAnyFile, searchRec) == 0)
	{
		do
		{
			if (searchRec.Name != "." && searchRec.Name != "..")
			{
				if ((searchRec.Attr & faDirectory) != 0)
				{
					getFolderSize(folder + "\\" + searchRec.Name, size);
				}
				else
				{
					size += searchRec.Size;
				}
			}
		} while (FindNext(searchRec) == 0);
	}
	FindClose(searchRec);
	return size;
}

int BrowserManager::getCasheSize()
{
	int size = 0;
	return getFolderSize(CASHE_PATH, size);
}

std::string BrowserManager::getHomepageUrl()
{
	return homepageUrl;
}

int BrowserManager::getBrowserDataSize()
{
	int size = 0;
	return getFolderSize(BROWSER_DATA_PATH, size);
}

void BrowserManager::clearCashe()
{
	std::filesystem::remove_all(CASHE_PATH.c_str());
}

void BrowserManager::clearBrowserData()
{
	std::filesystem::remove_all(BROWSER_DATA_PATH.c_str());
}

std::string BrowserManager::readHomePageUrl(std::string path)
{
	std::ifstream fileReader;
	std::string url;
    fileReader.open(path);
	if (fileReader.is_open())
	{
		std::getline(fileReader, url);
		fileReader.close();
	}
	return url;
}

bool BrowserManager::setHomepageUrl(std::string newUrl)
{
	homepageUrl = newUrl;
	return writeHomepageUrl("homepage", newUrl);
}

bool BrowserManager::writeHomepageUrl(std::string path, std::string newUrl)
{
	std::ofstream fileWriter;
	std::string url;
	fileWriter.open(path);
	bool isOpen = fileWriter.is_open();
	if (isOpen)
	{
		fileWriter << newUrl;
	}
	return isOpen;
}




