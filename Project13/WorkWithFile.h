#pragma once
#include <vector>
#include <fstream>
#include <string>
using namespace std;


class WorkWithFile
{
public:
	vector<string> readFile(const string& filename);
};

