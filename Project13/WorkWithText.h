#pragma once
#include <vector>
#include <string>
#include <mutex>
using namespace std;

class WorkWithText
{
	vector<string>text;
	vector<string>forbidden;
	mutex flag;
public:
	static string toLower(const string& lower);
};

