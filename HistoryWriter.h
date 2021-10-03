//---------------------------------------------------------------------------

#ifndef HistoryWriterH
#define HistoryWriterH
//---------------------------------------------------------------------------

#include "SiteVisit.h"

#include <vector>
#include <utility>
#include <fstream>

class HistoryWriter
{
	private:
	public:
		bool writeHistory(std::vector<SiteVisit> history, std::string path);


};
#endif
