//---------------------------------------------------------------------------

#pragma hdrstop

#include "StringConverter.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

std::string StringConverter::convertToStdString(String str)
{
	AnsiString ansiStr = str;
	return ansiStr.c_str();
}

String StringConverter::convertToSystemString(std::string str)
{
	return str.c_str();
}
