#include "WorkWithText.h"

wstring WorkWithText::toWide(const string& value)
{
	wstring_convert<codecvt_utf8<wchar_t>> conv;
	return conv.from_bytes(value);
}
string WorkWithText::toUTF8(const wstring& value)
{
	wstring_convert<codecvt_utf8<wchar_t>> conv;
	return conv.to_bytes(value);
}

wstring WorkWithText::toLower(wstring value)
{
	for (auto& ch : value)
	{
		ch = tolower(ch);
	}
	return value;
}


