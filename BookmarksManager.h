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
		BookmarksWriter writer;
		BookmarksReader reader;
	public:
		BookmarksManager();
		void readBookmarks(std::string path);


};
//---------------------------------------------------------------------------
#endif
