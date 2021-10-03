//---------------------------------------------------------------------------

#pragma hdrstop

#include "HistoryReader.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

std::vector<std::string> HistoryReader::readHistory(std::string path)
{
   //	const std::regex r(R"(^.+\S=.+\S$)");
	std::vector<std::string> history;
	std::ifstream fileReader;
    std::string line;
    fileReader.open(path);
    if (fileReader.is_open())
    {
        while (!fileReader.eof())
        {
            //std::pair<std::string, std::string> pair;
			std::getline(fileReader, line);
		   /* if (!std::regex_match(line, r))
            {
                bookmarks.clear();
				return bookmarks;
            }
            int index = line.find("=");
            pair.first = line.substr(0, index);
			pair.second = line.substr(index + 1);  */
			history.push_back(line);
        }
        fileReader.close();
    }
	return history;
}
