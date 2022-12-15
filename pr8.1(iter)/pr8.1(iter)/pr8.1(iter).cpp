#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

int Count(char* str)
{
	if (strlen(str) < 2)
		return 0;
	int k = 0;
	for (int i = 0; str[i + 1] != 0; i++)
		if ((str[i] == 'n' && str[i + 1] == 'o') || (str[i] == 'o' && str[i + 1] == 'n'))
			k++;
	return k;

}

char* Change(char* str, const size_t size)
{
	if (strlen(str) < 2)
		return str;
	char* tmp = new char[size];
	char* t = tmp;
	tmp[0] = '\0';
	int i = 0;
	while (str[i + 1] != 0)
	{
		if (str[i] == 'n' && str[i + 1] == 'o')
		{
			strcat(t, "***");
			t += 3;
			i += 2;
		}
		else
		{
			*t++ = str[i++];
			*t = '\0';
		}
	}
	*t++ = str[i++];
	*t++ = str[i++];
	*t = '\0';
	strcpy(str, tmp);
	return tmp;
}

int main()
{
	const size_t size = 256;
	char str[size];

	cout << "Enter string: ";
	cin.getline(str, size);

	cout << "String contained " << Count(str) << " groups of 'no' or 'on'" << endl;

	char* dest = new char[size];
	dest = Change(str, size);
	//cout << "Modified string (param) : " << str << endl;
	cout << "Modified string (result): " << dest << endl;

}