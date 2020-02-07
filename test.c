#include <stdio.h>
#include <Windows.h>
#include <malloc.h>

#pragma warning(disable:4996)

// void* malloc(size_t size);
// 如果开辟成功, 则返回一个指向开辟好空间的指针
// 如果开辟失败, 则返回一个NULL指针, 因此malloc的返回值一定要做检查
// 返回值的类型是void*, 所以malloc函数并不知道开辟空间的类型, 具体在使用的时候使用者自己来决定
// 如果参数size为0, malloc的行为是标准未定义的, 取决于编译器


// calloc函数
// 在堆上开辟空间 比malloc多了一步就是在申请空间时会自动将内存进行初始化清空
// void* calloc(size_t num, size_t size)
// num 表示申请多少个 size表示申请的每个元素的大小
// 函数的功能是为num个大小为size的元素开辟一块空间, 并且把空间的每个字节初始化为0
// 与函数malloc的区别只在于calloc会在返回地址之前把申请的空间的每个字节初始化为全0, 
// 其他都和malloc注意点一样
// 有利有弊 没有谁好谁坏 只有谁更合适
int main(){
	int n = 0;
	printf("Please Enter n: ");
	scanf("%d", &n);

	char* p = (char*)calloc(n, sizeof(char));
	if (NULL == p){
		printf("calloc error!\n");
		return 1;
	}

	scanf("%d", p);
	printf("echo# %s\n", p);

	printf("before: %p\n", p);
	p[0] = 'A';
	free(p);
	p[0] = 'A';
	printf("after: %p\n", p);

	p = NULL;

	system("pause");
	return 0;
}



















