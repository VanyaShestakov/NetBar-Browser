//---------------------------------------------------------------------------

#pragma hdrstop

#include "BookmarksReader.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

std::vector<std::pair<std::string, std::string>> BookmarksReader::readBookmarks(std::string path)
{
	const std::regex r(R"(^.+\S=.+\S$)");
	std::vector<std::pair<std::string, std::string>> bookmarks;
    std::ifstream fileReader;
    std::string line;
    fileReader.open(path);
    if (fileReader.is_open())
    {
        while (!fileReader.eof())
        {
            std::pair<std::string, std::string> pair;
			std::getline(fileReader, line);
            if (!std::regex_match(line, r))
            {
                bookmarks.clear();
                return bookmarks;
            }
            int index = line.find("=");
            pair.first = line.substr(0, index);
            pair.second = line.substr(index + 1);
            bookmarks.push_back(pair);
        }
        fileReader.close();
    }
	return bookmarks;
}
