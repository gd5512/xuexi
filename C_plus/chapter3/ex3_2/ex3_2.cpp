// ex3_2.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
float power(float x, int n)
{
	float pow = 1;
	while (n--)
		pow *= x;
	return pow;
}
int main()
{
	int n = 3;
	float x = 4.6;
	char c = 'a';
	cout << "power(" << x << ',' << n << ")=" << power(x, n) << endl;
	cout << "power(" << c << ',' << n << ")=" << power(c, n) << endl;
	cout << "power(" << n << ',' << x << ")=" << power(n, x) << endl;
	system("pause");
    return 0;
}

