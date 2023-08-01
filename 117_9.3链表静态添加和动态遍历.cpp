// 117_9.3链表静态添加和动态遍历.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <stdio.h>


struct Student
{
	char* name[32];
	int age;
	int aihao;
	int (*p)(int age);
	struct Stuednt* next;
	
};


struct Test
{
	int data;
	struct Test *next;
};
void printLink(struct Test* head)
{
	struct  Test* point=head;
	while (point!=NULL)
	{
		printf("%d ", point->data);
		point = point->next;
	}
	putchar('\n');
}

int main()
{
	int i;
	
	struct Test t1 = { 1,NULL };
	struct Test t2 = { 2,NULL };
	struct Test t3 = { 3,NULL };
	struct Test t4 = { 4,NULL };
	struct Test t5 = { 5,NULL };
	struct Test t6 = { 6,NULL };
	
	t1.next = &t2;
	t2.next = &t3;
	t3.next = &t4;
	t4.next = &t5;
	t5.next = &t6;
	
	printf("use t1 to print 3 numbers\n");
	printLink(&t1);


	return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
