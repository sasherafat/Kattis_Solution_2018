#include "stdafx.h"
#include <iostream>
#include <cstdio>
#include <stack>
using namespace std;

int main()
{
	long i, j, k, n, m;
	bool f;
	cin >> n;
	while (n--)
	{
		stack<long> st;
		f = false;
		cin >> m;
		cin >> k;
		st.push(k);
		m -= 2;
		for (i = 0; i < m; i++)
		{
			cin >> k;
			if (st.top() == k - 1)
				st.push(k);
			else if(!f)
			{
				j = i + 2;
				f = true;
			}
		}
		cin >> k;
		cout << j << endl;
	}
    return 0;
}