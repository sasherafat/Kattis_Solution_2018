#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	long i, j, k, t, s, a, b, c, d, n, v[10028][4];
	double m, p1, p2;
	cin >> n;
	for (i = 0; i < n; i++)
		cin >> v[i][0] >> v[i][1] >> v[i][2] >> v[i][3];
	cin >> t;
	while (t--)
	{
		cin >> a >> b >> c >> d;
		bool f = true;
		for (i = 0; i < n; i++)
		{
			m = (double)((double)(v[i][1] - v[i][3]) / (double)(v[i][0] - v[i][2]));
			p1 = (double)((double)b - (double)v[i][1] - (double)m * (a - v[i][0]));
			p2 = (double)((double)d - (double)v[i][1] - (double)m * (c - v[i][0]));

			if (p1 >= 0)
				p1 = 0;
			else
				p1 = -1;

			if (p2 >= 0)
				p2 = 0;
			else
				p2 = -1;

			if (p1 != p2)
				f = !f;
		}
		if (f)
			cout << "same" << endl;
		else
			cout << "different" << endl;
	}
	return 0;
}
