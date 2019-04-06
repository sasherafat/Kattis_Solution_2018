#include "stdafx.h"
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	long i, j, k = 0;
	char c[9][9];
	memset(c, '.', sizeof(c));
	for (i = 2; i < 7; i++)
		for (j = 2; j < 7; j++)
			cin >> c[i][j];
	for (i = 2; i < 7; i++)
		for (j = 2; j < 7; j++)
		{
			if (c[i][j] == 'k')
			{
				k++;
				if (c[i + 1][j - 2] == 'k' || c[i + 2][j - 1] == 'k' || c[i + 2][j + 1] == 'k' || c[i + 1][j + 2] == 'k' || c[i - 1][j + 2] == 'k' || c[i - 2][j + 1] == 'k' || c[i - 2][j - 1] == 'k' || c[i - 1][j - 2] == 'k')
				{
					cout << "invalid" << endl;
					return 0;
				}
			}
		}
	if (k == 9)
		cout << "valid" << endl;
	else
		cout << "invalid" << endl;
    return 0;
}