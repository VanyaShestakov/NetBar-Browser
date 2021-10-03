//---------------------------------------------------------------------------

#ifndef SiteVisitH
#define SiteVisitH
//---------------------------------------------------------------------------

#include <string>

class SiteVisit
{
	private:
		std::string title;
		std::string url;
		std::string time;
	public:
		SiteVisit(std::string title, std::string url, std::string time);
		std::string getTitle();
		std::string getUrl();
		std::string getTime();
};

#endif
