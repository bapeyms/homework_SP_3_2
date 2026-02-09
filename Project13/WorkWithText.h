#pragma once
#include <vector>
#include <string>
#include <locale>
#include <codecvt>
using namespace std;

class WorkWithText
{
	vector<string>text;
	vector<string>forbidden;
public:
    wstring toWide(const string& value); 
    string toUTF8(const wstring& value); 
    
	wstring toLower(wstring value);
	bool isLetter(wchar_t value) {
		return iswalpha(value);
	}
};

