//��ָoffer�������г��ִ�������һ�������

//��Ŀ����:
//��������һ�����ֳ��ֵĴ����������鳤�ȵ�һ�룬���ҳ�������֡���������һ������Ϊ9������{ 1, 2, 3, 2, 2, 2, 5, 4, 2 }��
//��������2�������г�����5�Σ��������鳤�ȵ�һ�룬������2����������������0��

//class Solution {
//public:
//	int MoreThanHalfNum_Solution(vector<int> numbers) {
//		if (numbers.empty())                              //�˴�Ӧ���пգ���������ûԪ��ʱ��Ӧֱ�ӷ���0�����������ȡ�����м�ֵmiddle���������Խ��
//			return 0;
//		sort(numbers.begin(), numbers.end());
//		int middle = numbers[numbers.size() / 2];
//		int count = 0;
//		for (int i = 0; i<numbers.size(); i++)
//		{
//			if (numbers[i] == middle)
//			{
//				++count;
//			}
//		}
//		return count>numbers.size() / 2 ? middle : 0;     //�ô��ж�����Ϊ���м�λ�õ�Ԫ�ز�һ�����Ǹ�����������һ�㳤�ȵ�Ԫ�أ���Ϊ�п��ܸ�Ԫ�ظ���������
//	}
//};

//˼·���Ƚ����������������һ��Ԫ�صĸ�����������һ�볤�ȣ����������м�λ��һ����Ÿ�Ԫ��
//		ȱ�㣺ʱ�临�ӶȽϸߣ���Ϊʹ����sort������ʱ�临�Ӷ�ΪO(n*logn��