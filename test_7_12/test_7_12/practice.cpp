//题目描述
//合法的括号匹配序列被定义为 :
//1. 空串""是合法的括号序列
//2. 如果"X"和"Y"是合法的序列, 那么"XY"也是一个合法的括号序列
//3. 如果"X"是一个合法的序列, 那么"[X]"也是一个合法的括号序列
//4. 每个合法的括号序列都可以由上面的规则生成
//例如"", "[]", "[][][]", "[[][]]", "[[[[]]]]"都是合法的。
//牛牛现在给出一个括号序列s, 牛牛允许你执行的操作是:在s的开始和结尾处添加一定数量的左括号('[')或者右括号(']')使其变为一个合法的括号匹配序列。牛牛希望你能求出添加最少的括号之后的合法的括号匹配序列是什么。
//输入描述 :
//输入包括一个字符串s, s的长度length(1 ≤ length ≤ 50), s中只包含'['和']'。
//输出描述 :
//输出一个字符串, 表示括号完全匹配的序列。
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//	string str;
//	while (getline(cin, str))
//	{
//		int lb = 0, rb = 0;
//		for (char ch : str)
//		{
//			if (ch == '[')
//				lb++;
//			else if (ch == ']')
//			{
//				if (lb > 0)
//					--lb;
//				else
//					++rb;
//			}
//		}
//		for (int i = 0; i < rb; ++i)
//			cout << '[';
//		cout << str;
//		for (int i = 0; i < lb; ++i)
//			cout << ']';
//		cout << endl;
//	}
//}
