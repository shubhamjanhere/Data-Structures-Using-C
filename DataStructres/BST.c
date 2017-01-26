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

int Search(struct BstNode* root, int data){
	if(root == NULL)	return 0;
	else if(root->data == data) return 1;
	else if(data <= root->data) return Search(root->left,data);
	else return Search(root->right, data);
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

int FindMin (struct BstNode* addr){
	if(addr == NULL){
		printf("The tree is empty.");
		exit(0);
	}
	if(addr->left == NULL)
		return addr->data;
	else
		FindMin(addr->left);
}

int max(int a, int b){
	int res = (a>b)?a:b;
	return res;
}

int FindHeight(struct BstNode* addr){
	if(addr == NULL)
		return -1;
	return max(FindHeight(addr->left),FindHeight(addr->right)) + 1;
}

struct BstNode* FindMinElement(struct BstNode* addr){	//Returns address of minimum element for Delete function
	if(addr == NULL){
		printf("The tree is empty.");
		exit(0);
	}
	if(addr->left == NULL)
		return addr;
	else
		FindMin(addr->left);
}

struct BstNode* Delete(struct BstNode* root, int data){
	struct BstNode *temp;
	if(root == NULL) return root;
	else if(data < root->data)	root->left = Delete(root->left,data);
	else if(data > root->data) root->right = Delete(root->right,data);
	else{	// ELEMENT FOUND!!!
		//Case 1 :No child
		if(root->left == NULL && root->right == NULL){
			free(root);
			root = NULL;
			return root;
		}
		
		// Case 2 :One child
		else if(root->left == NULL){
			temp = root;
			root = root->right;
			free(temp);
			return root;	
		}
		else if(root->right == NULL){
			temp = root;
			root = root->left;
			free(temp);
			return root;	
		}
		// Case 3 :Two Children
		else{
			temp = FindMinElement(root->right);
			root->data = temp->data;
			root->right = Delete(root->right,temp->data);
		}
	}
	return root;
	
}


void main(){
	int result;
	root = Insert(root,12);
	root = Insert(root, 5);
	root = Insert(root, 15);
	root = Insert(root, 3);
	root = Insert(root, 7);
	root = Insert(root, 13);
	root = Insert(root, 17);
	root = Insert(root, 1);
	root = Insert(root, 9);
	root = Insert(root,14);
	root = Insert(root, 20);
	root = Insert(root, 8);
	root = Insert(root,11);
	root = Insert(root, 18);
	printf("\n\nBefore Deletion \n\n\n");
	Print(root);
	Delete(root, 15);
	printf("\n\nAfter Deletion \n\n\n");
	Print(root);
	printf("\n\nLet us search no 15\n");
	printf("The result of search is %d (where 1 = true and 0 = false)\n", Search(root,15));
	printf("\nHeight of Tree  is %d\n", FindHeight(root));
	
}


