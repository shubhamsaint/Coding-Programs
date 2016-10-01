#include <iostream>
#include <malloc.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct node
{
int data;

struct node* left,*right;
};

struct node* newNode(int new_data)
{
 struct node* node = (struct node*)malloc(sizeof(struct node));

 node->data = new_data;

 node->left=node->right=NULL;
 return (node);

}

int treePathSumUtil(struct node* root,int val)
{
    if(root==NULL) return 0;

    val = (val*10+root->data);

    if(root->left==NULL&root->right==NULL)
    {
        return val;
    }
    // cout<<root->data<<" ";
    return (treePathSumUtil(root->left,val) +treePathSumUtil(root->right,val));

}
void printPath(int path[],int pathlen)
{

    for(int i=0;i<pathlen;i++)
    {
        cout<<path[i]<<" ";
    }
    cout<<"\n";
}

void printPathRecur(struct node* root,int path[],int pathlen)
{
    if(root==NULL) return;

    path[pathlen] = root->data;
    pathlen++;

    if(root->left==NULL&&root->right==NULL)
    {
        printPath(path,pathlen);
    }
    else
    {
        printPathRecur(root->left,path,pathlen);
        printPathRecur(root->right,path,pathlen);

    }

}


void printA(struct node* root)
{
    int path[1000];

    printPathRecur(root,path,0);

}

int treePathSum(struct node* root)
{
    return treePathSumUtil(root,0);
}



int main()
{
struct node *root = newNode(10);
    root->left = newNode(8);
    root->right = newNode(2);
    root->left->left = newNode(3);
    root->left->right = newNode(5);
    root->right->left = newNode(2);

    printf("Sum of all paths is %d", treePathSum(root));

    printA(root);
        return 0;
}
