#include "WorkWithText.h"

string WorkWithText::toLower(const string& lower)
{
	string result = lower;
	for (char& ch : result)
	{
		ch = tolower((unsigned char)ch);
	}
	return result;
}
