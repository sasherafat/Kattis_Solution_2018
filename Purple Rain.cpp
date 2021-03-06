#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	long i, j, k = 0;
	vector<pair<long, long>> v;
	string s;
	v.push_back(make_pair(0, 0));
	cin >> s;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == 'B')
			v.push_back(make_pair(++k, i + 1));
		else
			v.push_back(make_pair(--k, i + 1));
	}
	sort(v.begin(), v.end());
	i = v.front().second;
	j = v.back().first;
	auto it = v.end();
	it--;
	for (it; it != v.begin(); it--)
		if (j != it->first)
			break;
	it++;
	j = it->second;
	if (i > j)
		cout << j + 1 << " " << i << endl;
	else
		cout << i + 1 << " " << j << endl;
    return 0;
}