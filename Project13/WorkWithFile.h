#pragma once
#include <vector>
#include <fstream>
#include <string>
using namespace std;


class WorkWithFile
{
public:
	static vector<string> readFile(const string& filename);
};

