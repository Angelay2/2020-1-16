#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

#pragma warning(disable:4996)

// realloc����
// �ռ�����(��С��)
// ��һ��ָ�����һƬ�ռ�ʱ,��Ƭ�ѿռ������������ 
// Ҫ������ ������������ռ� �ٴ�free
// �ڽ����ڴ����µ��� ������ĵ�ַ���ܺ��Ͽռ��ַ��ͬ(���˵�С,��������ʱ����û���赲)
// void* realloc(void* ptr, size_t size)
// 
int main(){
	int n = 5;
	char* p = calloc(n, sizeof(char));
	if (p == NULL){
		printf("calloc error!\n");
		return 1;
	}
	printf("%p\n", p);

	char* q = realloc(p, 10);
	printf("%p, %p\n", p, q);// q��ַû��(���ϵ�ַһ��)
	char* q = realloc(p, 100000);
	printf("%p, %p\n", p, q);// q��ַ����, �����Ժ���q qΪ�µ�ַ
	char* q = realloc(p, -1);
	printf("%p, %p\n", p, q);// reallocʧ��












	int n = 0;
	printf("Please Enter num: ");
	scanf("%d", &n);

	char* p = (char*)realloc(n*sizeof(char),);
	if (NULL == p){
		printf("malloc error!\n");
		return 1;
	}

	scanf("%s", p);
	printf("echo# %s", p);


	system("pause");
	return 0;
}

































































































































