//---------------------------------------------------------------------------

#pragma hdrstop

#include "HistoryManager.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

HistoryManager::HistoryManager()
{
	writer = new HistoryWriter();
	reader = new HistoryReader();
	readHistory("history");
}

void HistoryManager::readHistory(std::string path)
{
	history = reader->readHistory(path);
}

bool HistoryManager::writeHistory(std::string path)
{
	return writer->writeHistory(history, path);
}

bool HistoryManager::addSiteVisit(std::string time, std::string title, std::string url)
{
	SiteVisit *visit = new SiteVisit(title, url, time);
	history.push_back(*visit);
	return writeHistory("history");
}

bool HistoryManager::clearHistory()
{
	history.clear();
	return writeHistory("history");
}

std::vector<SiteVisit> HistoryManager::getHistory()
{
	return history;
}

int HistoryManager::getSize()
{
	return history.size();
}

