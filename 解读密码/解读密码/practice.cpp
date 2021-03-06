//牛客：解读密码

//问题描述：
//nowcoder要和朋友交流一些敏感的信息，例如他的电话号码等。因此他要对这些敏感信息进行混淆，比如在数字中间掺入一些额外的符号，让它看起来像一堆乱码。
//现在请你帮忙开发一款程序，解析从nowcoder那儿接收到的信息，读取出中间有用的信息。
//输入描述 :
//输入有多行。每一行有一段经过加密的信息（其中可能包含空格），并且原始信息长度不确定。
//输出描述 :
//输出每段信息中数字信息。

#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str;
	while (getline(cin, str))
	{
		string s;
		int i = 0;
		for (int i = 0; i<str.size(); ++i)
		{
			if (str[i] >= '0' && str[i] <= '9')
			{
				s += str[i];
			}
		}
		cout << s << endl;
	}
}

//需要注意一点,声明一个string字符串，它是一个空串，本身含有\0