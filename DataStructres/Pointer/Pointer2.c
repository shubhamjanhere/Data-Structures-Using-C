#include<stdio.h>

int sumArr(int a[], int size)
{
	int i,sum=0;

//	int size= sizeof(a)/sizeof(a[0]);  -> WRONG, Since call by value which is = 1
	for(i=0;i<size;i++)
		sum+=a[i];
	return sum;
}	



void main()
{	int A[]={2,3,4,5,6};
	int i, sum=0;
	int *p = A;
	int size= sizeof(A)/sizeof(A[0]);
	for(i=0;i<5;i++)
	{
		printf("Address = %d \t", &A[i]);
		printf("Address = %d \n", (A+i));
		printf("Value = %d \t", A[i]);
		printf("Value = %d \n", *(A+i));
	}
	
	sum=sumArr(A,size);
	printf("The sum of array is %d", sum);
}
