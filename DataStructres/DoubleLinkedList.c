#include<stdio.h>
#include<stdlib.h>
// NOTE- Please write main function yourself.
struct Node {
	
	int data;
	struct Node* next;
	struct Node* prev;
			};

struct Node* head;

struct Node* GetNewNode(int x)
{
	struct Node* newNode = (struct Node*) malloc (sizeof(struct Node));
	newNode->data = x;
	newNode->prev = NULL;
	newNode->next = NULL;
	return newNode;
}

void Print()
{
	struct Node* temp = head;
	printf("Forward: \n");
	while(temp != NULL)
	{
		printf("%d \t" temp->data);
		temp = temp->next;
	}
	printf("\n");
	
}

void ReversePrint()
{
	struct Node* temp = head;
	if(temp == NULL) return; // Empty List
	printf("Reverse: \n");
	while(temp->next != NULL)
		temp = temp->next;
	
	while(temp != NULL)
	{
		printf("%d \t", temp->next);
		temp = temp->prev;
	}
	
	printf("\n");
	
}



void InsertAtHead (int x)
{
	struct Node* newNode = GetNewNode(x);
	if(head == NULL)
	{
		head = newNode; 
		return;
	}
	head->prev = newNode;
	newNode->next = head;
	head = newNode;
	head = temp;
}

int main()
{
	
}