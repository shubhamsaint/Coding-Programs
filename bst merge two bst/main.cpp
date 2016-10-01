#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct node
{
    int data;
    struct node* right,*left;
};

int *merge(int arr1[], int arr2[], int m, int n);

// A helper function that stores inorder traversal of a tree in inorder array
void storeInorder(struct node* node, int inorder[], int *index_ptr);

/* A function that constructs Balanced Binary Search Tree from a sorted array
   See http://www.geeksforgeeks.org/archives/17138 */
struct node* sortedArrayToBST(int arr[], int start, int end);

/* This function merges two balanced BSTs with roots as root1 and root2.
   m and n are the sizes of the trees respectively */
struct node* mergeTrees(struct node *root1, struct node *root2, int m, int n)
{
    if(root1==NULL&&root2==NULL)
        return NULL;

    int *arr1 = new int[m];
    int i=0;
    storeInorder(root1,arr1,&i);

    int* arr2 = new int[n];
    int j=0;
    storeInorder(root2,arr2,&j);

    int *mergedArray = merge(arr1,arr2,m,n);

    sortedArrayToBST(mergedArray,0,m+n-1);

}

 int *merge(int arr1[],int arr2[],int m,int n)
 {
     int *mergedArray = new int[m+n-1];

     int k=0;
int i=0,j=0;
     while(i<m&&j<n)
     {
         if(arr1[i]<arr2[j])
         {
             mergedArray[k++]=arr1[i++];
         }
         else
         {
             mergedArray[k++]=arr2[j++];
         }

     }
     while(i<m)
     {
         mergedArray[k]=arr1[i];
         i++,k++;
     }
     while(j<n)
     {
         mergedArray[k]=arr2[j];
         k++;j++;
     }
     return mergedArray;
 }

void storeInorder(struct node* node,int inorder[],int *index_ptr)
{
    if(node==NULL) return;

    storeInorder(node->left,inorder,index_ptr);
    inorder[*index_ptr] = node->data;
    (*index_ptr)++;
    storeInorder(node->right,inorder,index_ptr);

}
struct node* newNode(int newData)
{
 struct node* node = (struct node*)malloc(sizeof(struct node));

 node->data=newData;
 node->left=NULL;
 node->right=NULL;
     return node;


}

struct node* sortedArrayToBST(int arr[],int start,int end)
{
 if(start>end) return NULL;

    int mid = (start+end)/2;

    struct node* root = newNode(arr[mid]);

    root->left = sortedArrayToBST(arr,start,mid-1);
    root->right= sortedArrayToBST(arr,mid+1,end);

    return root;

}
void printInorder(struct node* node)
{
    if (node == NULL)
        return;

    /* first recur on left child */
    printInorder(node->left);

    printf("%d ", node->data);

    /* now recur on right child */
    printInorder(node->right);
}



int main()
{
    /* Create following tree as first balanced BST
           100
          /  \
        50    300
       / \
      20  70
    */
    struct node *root1  = newNode(100);
    root1->left         = newNode(50);
    root1->right        = newNode(300);
    root1->left->left   = newNode(20);
    root1->left->right  = newNode(70);

    /* Create following tree as second balanced BST
            80
           /  \
         40   120
    */
    struct node *root2  = newNode(80);
    root2->left         = newNode(40);
    root2->right        = newNode(120);

    struct node *mergedTree = mergeTrees(root1, root2, 5, 3);

    printf ("Following is Inorder traversal of the merged tree \n");
    printInorder(mergedTree);

    getchar();
    return 0;
}
