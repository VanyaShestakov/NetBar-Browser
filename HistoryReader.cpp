//---------------------------------------------------------------------------

#pragma hdrstop

#include "HistoryReader.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

std::vector<SiteVisit> HistoryReader::readHistory(std::string path)
{
   //	const std::regex r(R"(^.+\S=.+\S$)");
	std::vector<SiteVisit> history;
	std::ifstream fileReader;
	std::string line;
	std::string time;
	std::string title;
	std::string url;
    fileReader.open(path);
	if (fileReader.is_open())
    {
		while (!fileReader.eof())
		{
			//std::pair<std::string, std::string> pair;
			std::getline(fileReader, time);
			if (!fileReader.eof()) {
				std::getline(fileReader, title);
			} else {
				history.clear();
				return history;
			}

			if (!fileReader.eof()) {
				std::getline(fileReader, url);

			} else {
				history.clear();
				return history;
			}

			SiteVisit *visit = new SiteVisit(title, url, time + "\n");

		   /* if (!std::regex_match(line, r))
			{
				bookmarks.clear();
				return bookmarks;
			}
			int index = line.find("=");
            pair.first = line.substr(0, index);
			pair.second = line.substr(index + 1);  */
			history.push_back(*visit);
		}
		fileReader.close();
	}
	return history;
}
