#include "stdafx.h"
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
	long long i, j, k, n, l;
	string s;
	cin >> s;
	s = "000" + s;
	l = s.length();
	n = s[l - 1] - 48 + (10 * (s[l - 2] - 48)) + (100 * (s[l - 3] - 48));
	k = n / 8;
	if (n % 8 == 0)
	{
		for (i = 3; i < l; i++)
			cout << s[i];
		return 0;
	}
	else if (n % 8 <= 5)
		n = (k * 8) + 5;
	else if (n % 8 > 5)
		n = (k + 1) * 8;
	if (n < 1000)
	{
		for (i = 3; i < l - 3; i++)
			cout << s[i];
		if (l - 3 >= 4)
		{
			if (n < 100 && n >= 10)
				cout << "0";
			else if (n < 10)
				cout << "00";
		}
		cout << n << endl;
	}
	else
	{
		s[l - 4]++;
		for (i = l - 4; i > 2; i--)
		{
			if (s[i] > '9')
			{
				s[i] = '0';
				s[i - 1]++;
			}
			else
				break;
		}
		if (s[2] == '1')
			for (i = 2; i < l-3; i++)
				cout << s[i];
		else
			for (i = 3; i < l-3; i++)
				cout << s[i];
		cout << "000" << endl;
	}
    return 0;
}