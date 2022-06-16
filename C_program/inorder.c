#include <stdio.h>
#include<conio.h>
#include <stdlib.h>
struct node
{
     char data;
     struct node* left;
     struct node* right;
};
struct node* newNode(char data)
{
     struct node* node = (struct node*)malloc(sizeof(struct node));
     node->data = data;
     node->left = NULL;
     node->right = NULL;
     return(node);
}

void printInorder(struct node* node)
{
     if (node != NULL)
     {
     printInorder(node->left);
     printf("%c ", node->data);
     printInorder(node->right);
     }
}



int main()
{

     struct node *root  = newNode('A');
     root->left         = newNode('B');
     root->right           = newNode('C');
     root->left->left     = newNode('D');
     root->left->right   = newNode('E');
     root->right->left   = newNode('F');
     root->right->right   = newNode('G');

    

     printf("\nInorder traversal of binary tree is \n");
     printInorder(root);

     return 0;
}
