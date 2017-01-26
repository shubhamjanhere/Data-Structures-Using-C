#include<stdio.h>

void main()
{	int i,n;
	printf("Enter size of array. Elements will be 1	2 3... \n");
	scanf("%d", &n);
	int *A;
	A = (int *)malloc(n*sizeof(int));
	// int *A = (int *)calloc(n,sizeof(int));
	for(i=0;i<n;i++)
		{
			A[i]=i+1;
			printf("%d\t", A[i]);
		}
	
	int *B = (int *)realloc(A, 2*n*sizeof(int));
	
	for(i=n+1;i<2*n;i++)
		{
			B[i]=i+1;
		}
	printf("\n\nAfter reallocfunc \n\n");
	for(i=0;i<2*n;i++)
		printf("%d\t", A[i]);
	
//	free(A);
//	A = NULL;
	int *C = (int *)realloc(A, 0); // Equivalent to free(A);
	A = NULL;	
}
