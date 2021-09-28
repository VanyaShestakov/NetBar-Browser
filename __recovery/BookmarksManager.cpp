//---------------------------------------------------------------------------

#pragma hdrstop

#include "BookmarksManager.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

BookmarksManager::BookmarksManager()
{
	writer = new BookmarksWriter();
	reader = new BookmarksReader();
	readBookmarks("bookmarks");
}

void BookmarksManager::readBookmarks(std::string path)
{
	bookmarks = reader->readBookmarks(path);
}

bool BookmarksManager::writeBookmarks(std::string path)
{
	return writer->writeBookmarks(bookmarks, path);
}

bool BookmarksManager::addBookmark(std::string title, std::string url)
{
    std::pair<std::string, std::string> pair;
	pair.first = title;
	pair.second = url;
	bookmarks.push_back(pair);
	return writeBookmarks("bookmarks");
}

bool BookmarksManager::contains(std::string url)
{
	for (int i = 0; i < bookmarks.size(); ++i)
	{
	   if (bookmarks[i].second == url)
	   {
		   return true;
	   }
	}
	return false;
}

bool BookmarksManager::removeBookmark(std::string url)
{
	int index = 0;
	while (url != bookmarks[index].second)
	{
		index++;
		if (index == bookmarks.size())
		{
			index = -1;
			break;
		}
	}
	if (index != -1) {
        bookmarks.erase(bookmarks.begin() + index);
		return writeBookmarks("bookmarks");
	}
    return false;
}

std::vector<std::pair<std::string, std::string>> BookmarksManager::getBookmarks()
{
	return bookmarks;
}

int BookmarksManager::getSize()
{
	return bookmarks.size();
}

