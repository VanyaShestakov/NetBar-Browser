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
					FolderSize(folder + "\\" + searchRec.Name, size);
				}
				else
				{
					size += searchRec.Size;
				}
			}
		} while (FindNext(searchRec) == 0);
	}
	FindClose(searchRec);
}

int BrowserManager::getCasheSize()
{
	return getFolderSize(CASHE_PATH, 0);
}


