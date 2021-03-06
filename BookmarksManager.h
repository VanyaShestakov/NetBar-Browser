//---------------------------------------------------------------------------

#ifndef BookmarksManagerH
#define BookmarksManagerH
#include <vector>
#include <utility>
#include <fstream>
#include <regex>

#include "BookmarksReader.h"
#include "BookmarksWriter.h"
#include "StringConverter.h"

class BookmarksManager
{
	private:
		std::vector<std::pair<std::string, std::string>> bookmarks;
		BookmarksWriter *writer;
		BookmarksReader *reader;

		void readBookmarks(std::string path);
		bool writeBookmarks(std::string path);

	public:
		BookmarksManager();
        ~BookmarksManager();
		bool addBookmark(std::string title, std::string url);
		bool contains(std::string url);
        bool titleExists(std::string title);
		bool removeBookmark(std::string url);
        bool clearBookmarks();
		std::vector<std::pair<std::string, std::string>> getBookmarks();
		int getSize();


};
//---------------------------------------------------------------------------
#endif
