//ţ�ͣ�������

//��Ŀ��������֪���������ÿ����Բ���һ̥���ӡ�ÿֻС���ӵĳ�����Ϊ1�졣ĳ��������1ֻС���ӡ����ʵ�N���������õ�����ֻ����.

//#include<iostream>
//using namespace std;
//int main()
//{
//	long long arr[91];
//	arr[1] = 1;
//	arr[2] = 2;
//	for (int i = 3; i<91; ++i)
//	{
//		arr[i] = arr[i - 1] + arr[i - 2];
//	}
//	int n;
//	while (cin >> n)
//	{
//		cout << arr[n] << endl;
//	}
//	return 0;
//}

//����˼·:
//�ҳ����ƹ�ʽ
//�������ӳ�����Ϊ1�죬��˵�i-������ӵ���i��ȫ�����죬���ɵ�i��ĳ�����Ϊf(i-1)
//���ż��㣬��i���ж���ֻ���ӳ�����ע�⣬�����ǵ�i-1������Ӷ����Է�ֳ��ֻ�е�i-1��������Ӳ��ܽ��з�ֳ����i-��ĳ�������
//���ڵ�i-2���������������˵�i���³�����������Ϊf(i-2)
//���յõ��ĵ��ƹ�ϵΪf(i)=f(i-1)+f(i-2)

//�����1�죺���������Ϊ1��
//�ڶ��죺���������Ϊ1��+����������1��
//�����죺���������2��+����������1��