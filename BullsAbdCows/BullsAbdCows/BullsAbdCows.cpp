// BullsAbdCows.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include"BullsAndCows.h"

int main()
{
	string s1, s2;
	cin >> s1 >> s2;
	BullsAndCows B;
	cout << B.getHint(s1, s2) << '\n';
	system("pause");
    return 0;
}

