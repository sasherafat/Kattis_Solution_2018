#include "stdafx.h"
#include <iostream>
#include <cstring>
using namespace std;

int n, m;
char c[128][128];

void snake(int x, int y)
{
	if (c[x - 1][y] == '#')
	{
		c[x - 1][y] = '.';
		snake(x - 1, y);
	}
	if (c[x - 1][y + 1] == '#')
	{
		c[x - 1][y + 1] = '.';
		snake(x - 1, y + 1);
	}
	if (c[x][y + 1] == '#')
	{
		c[x][y + 1] = '.';
		snake(x, y + 1);
	}
	if (c[x + 1][y + 1] == '#')
	{
		c[x + 1][y + 1] = '.';
		snake(x + 1, y + 1);
	}
	if (c[x + 1][y] == '#')
	{
		c[x + 1][y] = '.';
		snake(x + 1, y);
	}
	if (c[x + 1][y - 1] == '#')
	{
		c[x + 1][y - 1] = '.';
		snake(x + 1, y - 1);
	}
	if (c[x][y - 1] == '#')
	{
		c[x][y - 1] = '.';
		snake(x, y - 1);
	}
	if (c[x - 1][y - 1] == '#')
	{
		c[x - 1][y - 1] = '.';
		snake(x - 1, y - 1);
	}
}

int main()
{
	int i, j, k, s = 0;
	cin >> n >> m;
	memset(c, '.', sizeof(c));
	for (i = 1; i <= n; i++)
		for (j = 1; j <= m; j++)
			cin >> c[i][j];


	for (i = 1; i <= n; i++)
		for (j = 1; j <= m; j++)
		{
			if (c[i][j] == '#')
			{
				s++;
				c[i][j] = '.';
				snake(i, j);
			}
		}
	cout<<s<<endl;
    return 0;
}