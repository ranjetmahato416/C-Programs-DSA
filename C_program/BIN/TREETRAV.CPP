#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct node
{
  char data;
  struct node* left;
  struct node* right;
};
struct node* newNode(char data)
{
   struct node* node = (struct node* node)
   nod