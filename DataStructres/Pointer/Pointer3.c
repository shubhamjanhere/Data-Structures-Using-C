#include<stdio.h>

void main()
{	int A[3][2][2]={ {{2,3},{4,5}} ,
					{{2,8},{6,4}},
					{{6,6},{7,7}} }; 

	printf("%d %d %d %d\n", A, *A, A[0], &A[0][0]);
	printf("%d %d\n",A[0][0][0], *(A[0][0]+1));
	

}
