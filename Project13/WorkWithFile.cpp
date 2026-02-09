#include "WorkWithFile.h"

vector<string> WorkWithFile::readFile(const string& filename)
{
	vector<string> text;
	ifstream file(filename);
	string buff;
	while (getline(file, buff))
	{
		text.push_back(buff);
	}
	return text;
}
