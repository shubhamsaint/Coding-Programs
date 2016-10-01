#include <iostream>

using namespace std;
struct node
{
    struct node* left,*right,*parent;

    int data;

};

struct node* minValue(struct node* node)
{
    struct node* current=node;

    while(current->left!=NULL)
    {
        current=current->left;
    }
    return current;
}

struct node* inOrderSuccessor(struct node* node,struct node* n)
{
    if(n->right!=NULL)
    {
        return minvalue(n->right);
    }
    struct node* p= n->parent;
    while(p!=NULL||n==p->right)
    {
        n=p;
        p=p->parent;
    }
    return p;
}


struct node* newNode(int data)
{
  struct node* node = (struct node*)
                       malloc(sizeof(struct node));
  node->data   = data;
  node->left   = NULL;
  node->right  = NULL;
  node->parent = NULL;

  return(node);
}


struct node* insert(struct node* node,int data)
{
 if(node==NULL)
 {
     return(newNode(data));
 }
 else{

    struct node* temp;

    if(data<=node->data)
    {
        temp=insert(node->left,data);
        node->left=temp;
        temp->parent=node;

    }
    else{
        temp=insert(node->right,data);
        node->right=temp;
        temp->parent=node;
    }
    return node;
 }
}


int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
