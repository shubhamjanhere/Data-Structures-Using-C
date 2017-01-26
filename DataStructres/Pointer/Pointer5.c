#include<stdio.h>

int Add(int a, int b)
{
	return a+b;
}

void printstmt()
{
	printf("The Solution is \n");
}

void FuncPtr(void (*ptr)())
{
	ptr();
}

void main()
{
	int c;
	int (*p)(int,int);
	void (*q)();
	q=printstmt;
	p=Add;
	c=p(4,6);
	FuncPtr(q);
	printf("%d",c);
}
