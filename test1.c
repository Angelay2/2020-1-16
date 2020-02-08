#include <stdio.h>
#include <stdlib.h>

#pragma warning(disable:4996)

// 为什么要有结构体
// 结构体是我们日常生活中用来描述某一个事物的概念 
// 结构体是具有相同或不同元素类型的集合
// 所以必须给每个结构体元素起名字
// 采用命名访问
// 即便两个结构体里的元素完全一样 但毕竟是两个结构体 所以两个类型不同
// 在结构体内部定义变量时, 必须先保证该元素类型大小明确 可以用next代替下一个元素

//
//typedef struct{
//	int data;
//	Node* next;
//}Node;// 不可行 
//// 最后的Note类型最后才出现的 而{}里直接使用Note定义指针时 指针类型不明确
//typedef struct Node{
//	int data;
//	struct Node* next;
//}Node;// 可行 }后面的Node不建议和{前面的Node名字相同 => }Node_t;
//// next类型明确 在最初进行过说明 struct后面的名字理论上是可以省略的
//// 若用指针进行结构体自引用时,一旦省略 内部就无法去定义指针

struct person{
	char name[32];
	char sex;
	int age;
	char id[32];
};
struct pos{
	double x;
	double y;
	struct pos* next;// 把所有的坐标连接起来
	struct person info;
};
int main(){
	int a[5] = { 1, 2, 3, 4, 5 };
	// a = { 1, 2, 3, 4, 5 };// 错误
	// 用花括号{}这种形式只能用来初始化 不能用来赋值 数组结构体都一样
	struct pos my_pos = { 43.21, 23.26, NULL, { "Tom", 'm', 31, "1234" } };//初始化  my_pos是变量

	// 两种访问结构体变量方式
	// 第一种
	struct pos* p = &my_pos;
	printf("%f\n", p->x);
	// 第二种
	my_pos.x;
	my_pos.y;
	my_pos.info.age;

	system("pause");
	return 0;
}





































