#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	cin >> s;
	if (s.find("ss") > 28)
		cout << "no hiss" << endl;
	else
		cout << "hiss" << endl;
    return 0;
}