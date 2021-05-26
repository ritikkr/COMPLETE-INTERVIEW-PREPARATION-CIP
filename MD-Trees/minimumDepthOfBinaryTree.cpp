// C++ program to find minimum depth of a given Binary Tree
#include<bits/stdc++.h>
using namespace std;

// A BT Node
struct Node
{
	int data;
	struct Node* left, *right;
};

int minDepth(Node *root)
{
    // corner cases
    if(root == NULL)
    {
        return 0;
    }
    if(root->left == NULL && root->right == NULL)
    {
        return 1;
    }
    int l = INT_MAX, r = INT_MAX;
    if(root->left)
    {
        l = minDepth(root->left);
    }
    if(root->right)
    {
        r = minDepth(root->right);
    }

    return min(l, r) + 1;
}

// Driver program
int main()
{
	// Let us construct the Tree shown in the above figure
	Node *root	 = newNode(1);
	root->left	 = newNode(2);
	root->right	 = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(5);
	cout <<"The minimum depth of binary tree is : "<< minDepth(root);
	return 0;
}
