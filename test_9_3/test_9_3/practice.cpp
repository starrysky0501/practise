//��Ŀ����:
//С��ȥ����԰��ˣ������Ʊһ��������t���ӡ�
//���ֳ�һ����n����Ŀ�����1��n����i����Ŀ��Ҫa[i]��ʱ�䡣���ֳ��涨����Ʊû�е���ǰ��ӵ���߶������볡�����������Ŀ����ʱ��Ʊ�Ƿ��Ѿ����ڡ�
//С�����������������Ŀ��˳�򣬵���ÿ����Ŀ��ֻ����һ�Ρ���С����������ã�
//�������� :
//��һ����������n��t�����������棬1��n��100��1��t��10000000��
//������һ��n����������i������a[i]��ʾ��i����Ŀ�����ʱ�䣬1��a[i]��100��
//������� :
//���һ����������ʾС����������á�

//#include<iostream>
//#include<algorithm>
//using namespace std;
//int main()
//{
//	int n;
//	long t, res = 0, a[101];
//	cin >> n >> t;
//	for (int i = 0; i<n; i++)
//		cin >> a[i];
//	sort(a, a + n);
//	for (int i = 0; i<n; i++)
//	{
//		if (t>res)
//			res += a[i];
//		if (t == res || res>t)
//			break;
//		if (t<res)
//			res += a[n - 1];
//	}
//	cout << res << endl;
//	return 0;
//}