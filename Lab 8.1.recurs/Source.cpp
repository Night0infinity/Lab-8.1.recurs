#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

char* Change(char* dest, const char* str, char* t, int i)
{
	if (str[i + 4] != 0)
	{
		if (str[i] == 'w' && str[i + 1] == 'h' && str[i + 2] == 'i' && str[i + 3] == 'l' && str[i + 4] == 'e')
		{
			strcat_s(t, strlen(str), "**");
			return Change(dest, str, t + 2, i + 5);
		}
		else
		{
			*t++ = str[i++];
			*t = '\0';
			return Change(dest, str, t, i);
		}
	}
	else
	{
		*t++ = str[i++];
		*t++ = str[i++];
		*t++ = str[i++];
		*t++ = str[i++];
		*t = '\0';
		return dest;
	}
}
bool Include(const char* s, const char c, int i)
{
	if (c == s[i])
		return true;
	if (s[i] != '\0')
		return Include(s, c, i + 1);
	else
		return false;
}
int main()
{
	char str[101];
	cout << "Enter string:" << endl;
	cin.getline(str, 100);

	char a = 'w';
	char b = 'h';
	char c = 'i';
	char d = 'l';
	char e = 'e';
	if (Include(str, a, 0) && Include(str, b, 0) && Include(str, c, 0) && Include(str, d, 0) && Include(str, e, 0))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
		char* dest1 = new char[151];
 dest1[0] = '\0';
 char* dest2;
 dest2 = Change(dest1, str, dest1, 0);
 cout << "Modified string (param) : " << dest1 << endl;
 cout << "Modified string (result): " << dest2 << endl;
 return 0;
}