#include <stdio.h>
#include <stdlib.h>

#pragma warning(disable:4996)

// ΪʲôҪ�нṹ��
// �ṹ���������ճ���������������ĳһ������ĸ��� 
// �ṹ���Ǿ�����ͬ��ͬԪ�����͵ļ���
// ���Ա����ÿ���ṹ��Ԫ��������
// ������������
// ���������ṹ�����Ԫ����ȫһ�� ���Ͼ��������ṹ�� �����������Ͳ�ͬ
// �ڽṹ���ڲ��������ʱ, �����ȱ�֤��Ԫ�����ʹ�С��ȷ ������next������һ��Ԫ��

//
//typedef struct{
//	int data;
//	Node* next;
//}Node;// ������ 
//// ����Note�������ų��ֵ� ��{}��ֱ��ʹ��Note����ָ��ʱ ָ�����Ͳ���ȷ
//typedef struct Node{
//	int data;
//	struct Node* next;
//}Node;// ���� }�����Node�������{ǰ���Node������ͬ => }Node_t;
//// next������ȷ ��������й�˵�� struct����������������ǿ���ʡ�Ե�
//// ����ָ����нṹ��������ʱ,һ��ʡ�� �ڲ����޷�ȥ����ָ��

struct person{
	char name[32];
	char sex;
	int age;
	char id[32];
};
struct pos{
	double x;
	double y;
	struct pos* next;// �����е�������������
	struct person info;
};
int main(){
	int a[5] = { 1, 2, 3, 4, 5 };
	// a = { 1, 2, 3, 4, 5 };// ����
	// �û�����{}������ʽֻ��������ʼ�� ����������ֵ ����ṹ�嶼һ��
	struct pos my_pos = { 43.21, 23.26, NULL, { "Tom", 'm', 31, "1234" } };//��ʼ��  my_pos�Ǳ���

	// ���ַ��ʽṹ�������ʽ
	// ��һ��
	struct pos* p = &my_pos;
	printf("%f\n", p->x);
	// �ڶ���
	my_pos.x;
	my_pos.y;
	my_pos.info.age;

	system("pause");
	return 0;
}





































