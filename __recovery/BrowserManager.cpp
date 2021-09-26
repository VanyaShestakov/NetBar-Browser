//---------------------------------------------------------------------------

#pragma hdrstop

#include "BrowserManager.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

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

void BrowserManager::clearCashe()
{
	std::filesystem::remove_all(CASHE_PATH.c_str());
}




