#include "stdafx.h"
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
	long i, j, n, m, k, s = 0;
	double r;
	vector<double> v, vn;
	cin >> n >> m >> k;
	for (i = 0; i < n; i++)
	{
		cin >> r;
		v.push_back(r);
	}
	for (i = 0; i < m; i++)
	{
		cin >> r;
		vn.push_back(r);
	}
	for (i = 0; i < k; i++)
	{
		cin >> r;
		r = (double)sqrt((double)2 * pow((double)r / 2, 2));
		vn.push_back(r);
	}
	sort(v.begin(), v.end());
	sort(vn.begin(), vn.end());
	for (i = 0; i < m + k; i++)
		for (j = 0; j < n; j++)
			if (vn[i] < v[j])
			{
				v[j] = -1;
				s++;
				break;
			}
	cout << s << endl;
    return 0;
}