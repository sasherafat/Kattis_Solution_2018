#include "stdafx.h"
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	long long i, j, k, n, c0 = 0, c1 = 0, c2 = 0, a[3], b[3];
	memset(a, 0, sizeof(a));
	memset(b, 0, sizeof(b));
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		cin >> k;
		a[i % 3] += k;
	}
	for (i = 1; i <= n; i++)
	{
		cin >> k;
		b[i % 3] += k;
	}
	c0 = a[0] * b[0] + a[1] * b[2] + b[1] * a[2];
	c1 = a[1] * b[0] + a[0] * b[1] + a[2] * b[2];
	c2 = a[0] * b[2] + a[2] * b[0] + a[1] * b[1];
	cout << c0 << " " << c1 << " " << c2 << endl;
    return 0;
}