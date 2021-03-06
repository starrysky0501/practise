//牛客：快到碗里来
//小喵们很喜欢把自己装进容器里的（例如碗），但是要是碗的周长比喵的身长还短，它们就进不去了。
//现在告诉你它们的身长，和碗的半径，请判断一下能否到碗里去。
//注：每组数据包含两个整数n(1≤n≤2 ^ 128) 和r(1≤r≤2 ^ 128)，分别代表喵的身长和碗的半径。

//#include<iostream>
//using namespace std;
//int main()
//{
//	double n, r;      //精度问题
//	double circum;
//	while (cin >> n >> r)
//	{
//		circum = 2 * 3.14*r;
//		if (circum<n)
//		{
//			cout << "No" << endl;
//		}
//		else
//		{
//			cout << "Yes" << endl;
//		}
//	}
//	return 0;
//}
//



//牛客：变态跳台阶
//一只青蛙一次可以跳上1级台阶，也可以跳上2级……它也可以跳上n级。求该青蛙跳上一个n级的台阶总共有多少种跳法。

//class Solution {
//public:
//	int jumpFloorII(int number) {
//		return (1 << (number - 1));
//	}
//};

//思路：
//举例：当有4级台阶时，分析：
//F(1)：1, 3  --->最后一次跳3个台阶，相当于站在1级台阶上
//F(2)：1，1，2 / 2，2 --->最后一次跳2个台阶，相当于站在2级台阶上
//F(3)：3，1 / 1，2，1 / 2，1，1 / 1，1，1，1 --->最后一次跳1个台阶，相当于站在三级台阶上。
//F(0)：4 --->最后一次跳4个台阶，相当于一次跳完。

//转移方程：F(i)=F(i-1)+F(i-2)+ ……+F(0)
//			F(i-1)=F(i-2)+ ……+F(0)
//			F(i)=2F(i-1)
//等比数列：公比为2,初值F(1)=1




