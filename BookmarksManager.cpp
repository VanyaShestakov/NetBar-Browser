//---------------------------------------------------------------------------

#pragma hdrstop

#include "BookmarksManager.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

BookmarksManager::BookmarksManager()
{
	*writer = new BookmarksWriter();
	*reader = new BookmarksReader();
}

void BookmarksManager::readBookmarks(std::string path)
{
	bookmarks = reader->readBookmarks(path);
}

bool BookmarksManager::writeBookmarks(std::string path)
{
	return writer->writeBookmarks(bookmarks, path);
}

void BookmarksManager::writeBookmarks(std::string path)
{
	return writer->writeBookmarks(bookmarks, path);
}
