//---------------------------------------------------------------------------

#ifndef HistoryManagerH
#define HistoryManagerH

#include <vector>
#include <utility>
#include <fstream>
#include <regex>

#include "HistoryReader.h"
#include "HistoryWriter.h"
#include "StringConverter.h"
#include "SiteVisit.h"
//---------------------------------------------------------------------------

class HistoryManager
{
	private:
		std::vector<SiteVisit> history;
		HistoryWriter *writer;
		HistoryReader *reader;

		void readHistory(std::string path);
		bool writeHistory(std::string path);

	public:
		HistoryManager();
		bool addSiteVisit(std::string time, std::string title, std::string url);
		//bool contains(std::string url);
		//bool removeBookmark(std::string url);
		bool clearHistory();
		std::vector<SiteVisit> getHistory();
		int getSize();


};

#endif
