﻿//题目描述
//在Alice生日的那天，Bob送给了她n个灯泡。他们决定用这些灯泡玩一个游戏：他们把这些灯泡从左往右排成一行，在初始时，有些灯泡是点亮的，有些灯泡是熄灭的。接下来，他们轮流进行操作，Alice首先操作。在每一次操作中，轮到操作的人需要选择一个点亮的灯泡，然后把它以及它右边的所有灯泡的状态进行一次改变，即把点亮的灯泡熄灭，把熄灭的灯泡点亮。如果在某一个人操作完之后，所有的灯泡都变成了熄灭状态，那么那个人就赢得了游戏。Alice和Bob都想赢得游戏，在他们都足够聪明的情况下，最后谁会赢呢？
//
//输入描述 :
//第一行包含一个整数 ，表示灯泡的个数。1 ≤ n ≤ 105
//第二行包含 个 0 或 1，表示初始时灯泡的状态，0 表示熄灭，1 表示点亮。
//
//输出描述 :
//如果最后Alice能赢，输出Alice，或则输出Bob。
//#include<iostream>
//using namespace std;
//int main(){
//	int n, change = 0;
//	cin >> n;
//	int x[n];
//	for (int i = 1; i <= n; i++){
//		cin >> x[i];
//		if (x[i] != x[i - 1])
//			change++;         //计算变化次数
//	}
//	if (x[0] == 0){              //根据第一个为0或者1以及变化次数进行讨论
//		if (change % 2 == 0)
//			cout << "Bob" << endl;
//		else
//			cout << "Alice" << endl;
//	}
//	if (x[0] == 1){
//		if (change % 2 == 0)
//			cout << "Alice" << endl;
//		else
//			cout << "Bob" << endl;
//
//	}
//}