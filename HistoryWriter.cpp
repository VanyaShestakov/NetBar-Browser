//---------------------------------------------------------------------------

#pragma hdrstop

#include "HistoryWriter.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

bool HistoryWriter::writeHistory(std::vector<SiteVisit> history, std::string path)
{
	std::ofstream writer;
    std::string line;
	writer.open(path);
	bool isOpen = writer.is_open();
	if (isOpen)
	{
		for (int i = 0; i < history.size(); ++i)
		{
			if(i + 1 == history.size())
			{
				writer << history[i].getTime();
				writer << history[i].getTitle() << std::endl;
				writer << history[i].getUrl();
			}
			else
			{
				writer << history[i].getTime();
				writer << history[i].getTitle() << std::endl;
				writer << history[i].getUrl() << std::endl;
			}
		}
		writer.close();
	}
	return isOpen;
}