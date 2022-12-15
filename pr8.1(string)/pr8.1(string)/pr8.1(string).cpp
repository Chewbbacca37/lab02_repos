#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>

using namespace std;

int Count(const string s)
{
	int k = 0;
	size_t pos = 0;

	while ((pos = s.find("no", pos)) != -1) {
		k++;
		pos++;
	}

	pos = 0;
	while ((pos = s.find("on", pos)) != -1) {
		k++;
		pos++;
	}

	return k;
}

string Change(string& s)
{
	while (s.find("no") != -1) {
		s = s.replace(s.find("no"), 2, "***");
	}

	return s;
}

int main()
{
	string str;

	cout << "Enter string:";
	cin >> str;

	cout << "String contained " << Count(str) << " groups of 'no' or 'on'" << endl;

	string dest = Change(str);

	//cout << "Modified string (param) : " << str << endl;
	cout << "Modified string (result): " << dest << endl;

	return 0;
}