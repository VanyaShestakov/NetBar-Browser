//---------------------------------------------------------------------------

#pragma hdrstop

#include "SiteVisit.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)


SiteVisit::SiteVisit(std::string title, std::string url, std::string time)
{
	this.title = title;
	this.url = url;
	this.time = time;
}              '

std::string getTitle()
{
	return this.title;
}

std::string getUrl()
{
	return this.url;
}
std::string getTime()
{
    return this.time;
}
