2018У�����⣺��������
��Ŀ����
���������Ĳ�Ʒ��װ����ͬ�߶�h���ߴ�Ϊ1 * 1, 2 * 2��3 * 3��4 * 4��5 * 5��6 * 6�ķ��ΰ�װ�С� ��Щ��Ʒʼ�������Ʒ�߶���ͬ�ĳߴ�Ϊ6 * 6�İ����������ͻ�����Ϊ�ʷѺܹ����Թ���Ҫ�뷽�跨�ļ�Сÿ����������ʱ�İ������������Ǻ���Ҫ��һ���õĳ�������ǽ���������Ӷ���ʡ���á��������������������ơ�
�������� :
�����ļ��������У�ÿһ�д���һ��������ÿ���������һ�а��������������м��ÿո�������ֱ�Ϊ 1 * 1 �� 6 * 6 �����ֲ�Ʒ�������������ļ����� 6 �� 0 ��ɵ�һ�н�β��
������� :
������������һ�� 6 �� 0 ���⣬�����ļ���ÿһ�ж�Ӧ������ļ���һ�У�ÿһ�����һ������������Ӧ�Ķ����������С��������
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution{
public:
	int packnum(vector<int>& a){
		int three[4] = { 0, 5, 3, 1 };
		int num = 0;
		if (a[5] + a[4] + a[3] + a[2] + a[1] + a[0] == 0)
			return 0;
		//���6*6,5*5,4*4,3*3����Ĵ�������
		num = a[5] + a[4] + a[3] + (a[2] + 3) / 4;
		//��û��������2*2��λ����Ҫ�����е�2*2����
		int two_rest = a[3] * 5 + three[a[2] % 4];
		//���2*2���࣬��������е�2*2��� ʣ���2*2 ����Ҫ��������
		if (a[1]>two_rest) num += (a[1] - two_rest + 8) / 9;
		//��û��������1*1��λ����Ҫ�����е�1*1����
		int one_rest = 36 * (num - a[5]) - a[4] * 25 - a[3] * 16 - a[2] * 9 - a[1] * 4;
		//���1*1���࣬��������е�1*1���ʣ���1*1����Ҫ��������
		if (a[0]>one_rest) num += (a[0] - one_rest + 35) / 36;
		return num;
	}
};

int main(){
	vector<int> packs(6, 0);
	int pack = 0;
	Solution s;
	int i = 0;
	while (cin >> packs[0] >> packs[1] >> packs[2] >> packs[3] >> packs[4] >> packs[5]){
		int ans = s.packnum(packs);
		if (ans == 0){
			break;
		}
		else{
			cout << ans << endl;
		}
	}

	return 0;
}