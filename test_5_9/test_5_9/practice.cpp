//2018У�����⣺�б���ȫ
//���̳ǵ�ĳ��λ����һ����Ʒ�б������б�����L1��L2�������б�ƴ�Ӷ��ɡ����û��������ҳʱ����Ҫ���б�L1��L2�л�ȡ��Ʒ����չʾ��չʾ�������£�
//1. �û����Խ��ж�η�ҳ����offset��ʾ�û���֮ǰҳ���Ѿ��������Ʒ����������offsetΪ4����ʾ�û��Ѿ�����4����Ʒ
//2. n��ʾ��ǰҳ����Ҫչʾ����Ʒ����
//3. չʾ��Ʒʱ����ʹ���б�L1������б�L1���Ȳ������ٴ��б�L2��ѡȡ��Ʒ
//4. ���б�L2�в�ȫ��Ʒʱ��Ҳ���ܴ���������������
//������������򣬼����б�L1��L2����Щ��Ʒ�ڵ�ǰҳ�汻չʾ��
//�������� :
//ÿ�������������1�����������������ĸ��������ֱ��ʾƫ����offset��Ԫ������n���б�L1�ĳ���l1���б�L2�ĳ���l2��
//������� :
//��һ��������ĸ������ֱ��ʾL1��L2������start1��end1��start2��end2��ÿ������֮����һ���ո�
//ע�⣬�����ʹ�ð뿪��������ʾ����������㣬�������յ㡣���ĳ���б�������Ϊ�գ�ʹ��[0, 0)��ʾ�����ĳ���б���������ʹ��[len, len)��ʾ��len��ʾ�б��ĳ��ȡ�
//#include <algorithm>
//#include <cstdio>
//using namespace std;
//int main() {
//	int offset, n, l1, l2;
//	while (~scanf("%d%d%d%d", &offset, &n, &l1, &l2))
//		printf("%d %d %d %d\n", min(l1, offset), min(l1, offset + n), min(
//		max(offset - l1, 0), l2), min(max(offset + n - l1, 0), l2));
//	return 0;
//}