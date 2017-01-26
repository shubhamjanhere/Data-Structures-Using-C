// Program To create a linked list, and enter element at a specific node and delete an element at specific position
// Reverse linked list using recursion
#include<stdio.h>
#include<stdlib.h>

struct Node 
{
	int data;
	struct Node* next;
};


struct Node* head=NULL;


void Insert(int x)
{	
	struct Node* temp = (struct Node *)malloc(sizeof(struct Node));
	temp->data = x;
	temp->next = head;
	head=temp;
}

void InsertPosition(int data, int n)
{	int i;
	struct Node* temp2 = (struct Node *)malloc(sizeof(struct Node));
	temp2->next=head;
	struct Node* temp = (struct Node *)malloc(sizeof(struct Node));
	temp->data = data;
	temp->next = NULL;
	if(n==1)
	{
		temp->next=head;
		head = temp;
		return;
	}
	
	
	for (i=0; i<n-1;i++)
		temp2=temp2->next;

	temp->next=temp2->next;
	temp2->next=temp;
	return;
	
}



void Print()
{
	struct Node* temp = head;
	printf("\n\nThe List is \n");
	
	while(temp!=NULL)	
		{
			printf("%d \t",temp->data);
			temp = temp->next;
		}
}


void PrintRev(struct Node* p)
{	// Same can be edited to print elements in normal order through recuesion. All you need to do is interchange STATEMENT 1 with STATEMENT 2. 
	if(p==NULL)	return;	
	PrintRev(p->next); //STATEMENT 1
	printf("%d \t",p->data);// STATEMENT 2
}

 void ReverseList()
 {
	 
	 struct Node *current, *next, *prev;
	 current = head;
	 prev = NULL;
	 while(current != NULL)
	 {	
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
		
	 }
	head = prev;
 }
 
 void ReverseListRecursion()
 {
	 struct Node* p = head;
	 struct Node* q;
	if(p->next==NULL) 
		return;	
	}
	ReverseListRecursion(p->next);
	q = p->next;	
	q->next = p;
	p->next = NULL;
	/*	________________
		|  p   | address|
		|  2   |	100 |
		|  p   | p->next|
		-----------------
	*/
	 
 }

void delet(int n)
{
	struct Node* temp = head;
	struct Node* temp2;
	int i;
	if(n==1)
	{
		head=temp->next;
		free(temp);
		return;
	}
	for(i=0;i<n-2;i++)
		temp=temp->next;
			
	temp2=temp->next;
	temp->next=temp2->next;
	free(temp2);
	return;	
}

void main()
{	
	int n,i,x, data, pos;
	printf("\nHow many Numbers do you want to enter? \n\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter the number\n");
		scanf("%d",&x);
		Insert(x);
		Print();
	}

	printf("\n\nEnter the element and place to be entered\n");
	scanf("%d",&data);
	scanf("%d",&pos);
	InsertPosition(data,pos);
	Print();
	
	printf("\n\nEnter the element to be deleted\n");
	scanf("%d",&pos);
	delet(pos);

	printf("\n\nNow we will print the list in reverse order using recursion\n");
	PrintRev(head);
}


// COMMENTS-

/*
COMPARISON OF Arrays and Linked List->

For Arrays-

Cost of accessing an element- O(1)
Memory Requirement- Fixed Size
Cost of inserting an element->
								in the beginnig of the list- O(n)
								in the end of the list- O(1) if array is not full, O(n) if array is full aka creating new array
								at i th position- O(n)

For Linked list-

Cost of accessing an element- O(n)
Memory Requirement- Changing Size
Cost of inserting an element->
								in the beginnig of the list- O(1)
								in the end of the list- O(n)
								at i th position- O(n)

Ease of use - Arrays
*/