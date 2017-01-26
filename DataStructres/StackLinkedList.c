// Program To Implement stack by linked list
#include<stdio.h>
#include<stdlib.h>

struct Node 
{
	int data;
	struct Node* link;
};


struct Node* top=NULL;


void Push(int x)
{	
	struct Node* temp = (struct Node *)malloc(sizeof(struct Node));
	temp->data = x;
	temp->link = top;
	top=temp;
}

void Pop()
{	struct Node* temp;
	if(top == NULL) return;
	temp = top;
	top = top->link;
	free(temp);
	}
	
void Print()
{
	struct Node* temp = top;
	printf("\n\nThe List is \n");
	
	while(temp!=NULL)	
		{
			printf("%d \t",temp->data);
			temp = temp->next;
		}
}


void main()
{	

}
