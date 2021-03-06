#include "stdafx.h"
#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main() 
{
	int n, m, i, j, k;
	long long unsigned co = 1, to = 1;
	unordered_map<string, int> corr, incr;
	unordered_map<string, string> trans;
	string s[30], d, e, c;
	cin >> n;
	for (i = 0; i < n; i++)
		cin >> s[i];
	cin >> m;
	for (i = 0; i < m; i++) 
	{
		cin >> d >> e >> c;
		trans[d] = e;
		if (c == "correct") 
			corr[d]++;
		else 
			incr[d]++;
	}
	for (i = 0; i < n; i++) 
	{
		to *= corr[s[i]] + incr[s[i]];
		co *= corr[s[i]];
	}
	if (to == 1) 
	{
		for (int i = 0; i < n; i++)
			cout << trans[s[i]] << " ";
		cout << endl;
		if (co) 
			cout << "correct" << endl;
		else 
			cout << "incorrect" << endl;
	}
	else 
	{
		cout << co << " correct" << endl;
		cout << to - co << " incorrect" << endl;
	}
	return 0;
}