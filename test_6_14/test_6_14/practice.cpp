﻿//题目描述
//对于一个十进制数而言，它的数位和等于将它各位数字相加得到的和。比如 231 的数位和 是 6，3179 的数位和是 20。
//现在你知道某个十进制数的数位和等于 s，并且这个数不包含 0，且任意相邻的数位是不同 的，比如 112 或者 102 都是不满足条件的。现在你想知道满足这样的条件的最大的数是多少 ?
//输入描述 :
//第一行包含一个整数𝑠，1 ≤ 𝑠 ≤ 42
//输出描述 :
//输出满足条件的最大整数。
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int s = 0;
//	int n = 0, m = 0;
//	char str[50] = { 0 };
//
//	scanf("%d", &s);
//	n = s % 3;
//	m = s / 3;
//
//	if (1 == n)
//	{
//		while (m--)
//		{
//			strcat(str, "12");
//		}
//		strcat(str, "1");
//	}
//	else if (2 == n)
//	{
//		while (m--)
//		{
//			strcat(str, "21");
//		}
//		strcat(str, "2");
//	}
//	else
//	{
//		while (m--)
//		{
//			strcat(str, "21");
//		}
//	}
//	printf("%s\n", str);
//}