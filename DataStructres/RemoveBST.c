// Program To Implement Binary Search Tree
#include<stdio.h>
#include<stdlib.h>

struct BstNode 
{
	int data;
	struct BstNode* left;
	struct BstNode* right;
};

struct BstNode* root = NULL;

struct BstNode* GetNewNode(int data){
	struct BstNode* newNode = (struct BstNode*)malloc(sizeof(struct BstNode));
	newNode->data = data;		//(*newNode).data = data;
	newNode->left = newNode->right = NULL;
	return newNode;
}

struct BstNode* Insert(struct BstNode* root, int data)
{
	if (root == NULL){
		root = GetNewNode(data);
	}
	
	else if( data <= root->data){
		root->left = Insert(root->left,data);
	}
	else{
		root->right = Insert(root->right,data);
	}
	
}


void Print(struct BstNode* addr){
	printf("%d \t", addr->data);
	if(addr->left != NULL || addr->right != NULL){
		if(addr->left != NULL)
			Print(addr->left);
		if(addr->right != NULL)
			Print(addr->right);	
		return;
	}
}

