// Check if given tree is Binary Search Tree

#include<stdio.h>
#include<limits.h>

struct Node{
	char data;
	struct Node* left;  
	struct Node* right;
};


int IsBSTUtil(struct Node* root, int minVal, int maxVal)
{
	if(root == NULL) return 1;
	
	if((root->data > minVal) &&
		(root->data < maxVal) &&
		IsBinarySearchTree(root->left, minVal, root->data) && 
		IsBinarySearchTree(root->right, root->data, maxVal))
			return 1;

	else
		return 0;	
}

int IsBinarySearchTree(struct Node* root){
	return IsBSTUtil(root, INT_MIN,INT_MAX); 
	// INT_MIN and INT_MAX are integral values equal to -inf. and +infinity in <limits.h> library
}

void main()
{
	
}

// ALTERNATE CODE 
/*

int IsSubtreeLesser(struct Node* root, int value){
	if(root == NULL) return 1;
	
	if( (root->data <= value) &&
		IsSubtreeLesser(root->left,value) &&
		IsSubtreeLesser(root->right,value) )
			return 1;
	else
		return 0; 		
}

int IsSubtreeGreater(struct Node* root, int value){
	if(root == NULL) return 1;
	
	if( (root->data > value) &&
		IsSubtreeGreater(root->left,value) &&
		IsSubtreeGreater(root->right,value) )
			return 1;
	else
		return 0; 		
}

int IsBinarySearchTree(struct Node* root){

	if(root == NULL) return 1;
	
	if(IsSubtreeLesser(root->left,root->data) &&
		IsSubtreeGreater(root->right,root->data) &&
		IsBinarySearchTree(root->left) && 
		IsBinarySearchTree(root->right)
		)
			return 1;

	else
		return 0;	
}

*/

