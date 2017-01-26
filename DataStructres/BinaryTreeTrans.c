// Program to Implement preorder, postorder and inorder taversal of Binary Search Tree

/*
Time Complexity : O(n)
Space Complexity: O(n)

Worst Case : O(n)
Best/ Avg  : O(log n)
*/
#include<stdio.h>

struct Node{
	char data;
	Node* left, right;
};

void Preorder (Node *root)
{	/*
	1- Visit root
	2- Vist left sub tree
	3- Visit right sub tree
	*/
	if(root == NULL) return;
	printf("%c\t", root->data);
	Preorder(root->left);
	reorder(root->right);
}

void Inorder (Node *root)
{	
	if(root == NULL) return;
	Inorder(root->left);
	printf("%c\t", root->data);
	Inorder(root->right);
}

void Postorder (Node *root)
{	/*
	1- Visit left sub tree
	2- Visit right sub tree
	3- Visit root 
	*/
	if(root == NULL) return;
	Postorder(root->left);
	Postorder(root->right);
	printf("%c\t", root->data);
}




























