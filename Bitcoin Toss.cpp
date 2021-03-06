#include "stdafx.h"
#include <iostream>
#include <cstring>
#include <string>
#include <cstdio>
#include <cmath>
#include <set>
using namespace std;

long MNP(long n)
{
	long i, j = 1;
	for (i = 1; j <= n; i++)
		j = i * pow(2, i);
	return i - 2;
}
int main()
{
	long i, j, k, t, n, p, h;
	bool f;
	string s;
	char c[20028];
	set<string> sts;
	cin >> t;
	getchar();
	while (t--)
	{
		gets_s(c);
		//for (k = 0; c[k] != '\0'; k++);
		k = strlen(c);
		n = MNP(k);
		f = false;
		while (true)
		{
			p = pow(2, n);
			for (i = 0; i < k; i++)
			{
				h = 1;
				for (j = i; j < k; j++, h++)
				{
					s += c[j];
					if (h % n == 0)
					{
						if (sts.find(s) == sts.end())
							sts.insert(s);
						else
							break;
						s.clear();
					}
				}
				if (sts.size() == p)
				{
					cout << n << " " << i << endl;
					f = true;
					break;
				}
				sts.clear();
				s.clear();
			}
			sts.clear();
			s.clear();
			n--;
			if (f)
				break;
			if (!f && n == 0)
			{
				cout << 0 << " " << 0 << endl;
				break;
			}
		}
	}
    return 0;
}