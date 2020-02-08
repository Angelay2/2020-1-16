#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

#pragma warning(disable:4996)

// realloc函数
// 空间申请(调小简单)
// 用一个指针访问一片空间时,这片堆空间必须是连续的 
// 要想扩大 必须重新申请空间 再次free
// 在进行内存重新调整 调整后的地址可能和老空间地址不同(除了调小,或者扩容时后面没有阻挡)
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
	printf("%p, %p\n", p, q);// q地址没变(新老地址一样)
	char* q = realloc(p, 100000);
	printf("%p, %p\n", p, q);// q地址变了, 从这以后用q q为新地址
	char* q = realloc(p, -1);
	printf("%p, %p\n", p, q);// realloc失败












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

































































































































