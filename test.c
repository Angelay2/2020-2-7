#include <stdio.h>
#include <Windows.h>
#include <malloc.h>

#pragma warning(disable:4996)

// void* malloc(size_t size);
// ������ٳɹ�, �򷵻�һ��ָ�򿪱ٺÿռ��ָ��
// �������ʧ��, �򷵻�һ��NULLָ��, ���malloc�ķ���ֵһ��Ҫ�����
// ����ֵ��������void*, ����malloc��������֪�����ٿռ������, ������ʹ�õ�ʱ��ʹ�����Լ�������
// �������sizeΪ0, malloc����Ϊ�Ǳ�׼δ�����, ȡ���ڱ�����


// calloc����
// �ڶ��Ͽ��ٿռ� ��malloc����һ������������ռ�ʱ���Զ����ڴ���г�ʼ�����
// void* calloc(size_t num, size_t size)
// num ��ʾ������ٸ� size��ʾ�����ÿ��Ԫ�صĴ�С
// �����Ĺ�����Ϊnum����СΪsize��Ԫ�ؿ���һ��ռ�, ���Ұѿռ��ÿ���ֽڳ�ʼ��Ϊ0
// �뺯��malloc������ֻ����calloc���ڷ��ص�ַ֮ǰ������Ŀռ��ÿ���ֽڳ�ʼ��Ϊȫ0, 
// ��������mallocע���һ��
// �����б� û��˭��˭�� ֻ��˭������
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



















