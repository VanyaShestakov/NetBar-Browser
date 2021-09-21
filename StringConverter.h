//---------------------------------------------------------------------------

#ifndef StringConverterH
#define StringConverterH

#include <string>
#include <System.Classes.hpp>
//---------------------------------------------------------------------------
class StringConverter
{
	private:
	public:
		std::string convertToStdString(String str);
		String convertToSystemString(std::string str);
};
#endif
