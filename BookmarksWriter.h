//---------------------------------------------------------------------------

#ifndef BookmarksWriterH
#define BookmarksWriterH

#include <vector>
#include <utility>
#include <fstream>

class BookmarksWriter
{
	private:
	public:
		bool writeBookmarks(std::vector<std::pair<std::string, std::string>> bookmarks, std::string path);


};
//---------------------------------------------------------------------------
#endif
