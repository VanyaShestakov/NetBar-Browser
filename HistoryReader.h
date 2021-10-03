//---------------------------------------------------------------------------

#ifndef HistoryReaderH
#define HistoryReaderH

#include "SiteVisit.h";

#include <vector>
#include <utility>
#include <fstream>
#include <regex>

class HistoryReader
{
	private:
	public:
		std::vector<SiteVisit> readHistory(std::string path);


};
//---------------------------------------------------------------------------
#endif
