#include<stdio.h>
void main()
{

	int a = 12;
	int *p  = &a;
	
	printf("Size of int =%d \n *p= %d \n p=%d \n",sizeof(int),*p,p);
	 
	*p = 1205;
	printf("Size of int =%d \n *p= %d \n p+1=%d \n", sizeof(int), *p, p+1);

	char *p0 = (char*)p;
	printf("Size of char =%d \n *p0= %d \n p0=%d \n", sizeof(char), *p0, p0);
	printf("(*p0+1)= %d \n (p0+1)=%d \n", *(p0+1), (p0+1));

	// Void Pointer
	void *p1;
	p1 = p;
	printf("Address of void * p1= %d \n\n", p1);
	// ERROR ->	printf("*p1=%d \n", *p1);
	
	int x = 5;
	p = &x;
	*p = 6;
	int **q = &p;
	int ***r = &q;
	
	printf("p=%d \t *p=%d \n *q=%d \t **q=%d \n",p, *p, *q, **q );
	printf("*r=%d \t **r=%d \t ***r=%d \n\n", *r, **r, ***r );

	***r = 35;
	printf("x=%d\n", x);
	
	getch();
}