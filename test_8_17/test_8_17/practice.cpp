﻿//题目描述
//菲波那契数列是指这样的数列：数列的第一个和第二个数都为1，接下来每个数都等于前面2个数之和。给出一个正整数K，要求菲波那契数列中第k个数是多少。
//输入描述 :
//输入一行，包含一个正整数k。(0<k<47)
//输出描述 :
//输出一行，包含一个正整数，表示菲波那契数列中第k个数的大小
//#include<iostream>
//using namespace std;
//int main()
//{
//	int a[47], k;
//	cin >> k;
//	for (int i = 2; i <= k; i++)
//	{
//		a[0] = 1;
//		a[1] = 1;
//		a[i] = a[i - 1] + a[i - 2];
//	}
//	cout << a[k - 1] << endl;
//}
//
//