#include "stdafx.h"
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int l, r, k;
	cin >> l >> r;
	if (r == 0 && l == 0)
		cout << "Not a moose" << endl;
	else if (l != r)
		cout << "Odd " << 2 * max(l, r) << endl;
	else
		cout << "Even " << 2 * l << endl;
    return 0;
}