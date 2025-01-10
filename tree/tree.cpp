#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *left;
    node *right;
};

node* newNode(int data){
    node *element = new node();
    element->data = data;
    element->left = NULL;
    element->right = NULL;
    return element;
}


void printNode(node *n){
    while(n!=NULL){
        cout<<n->data<<" ";
        n = n->left;
    }
    cout<<endl;

}
void PrintInorder(node *n){
    if(n==NULL){
        return;
    }
    
    PrintInorder(n->left);
    

    cout<<n->data<<" ";
    PrintInorder(n->right);

}
void printPostorder(node *n){
    if(n==NULL){
        return;
    }
    printPostorder(n->left);
    printPostorder(n->right);
    cout<<n->data<<" ";
}

void printPreorder(node *n){
    if(n==NULL){
        return;
    }
    cout<<n->data<<" ";
    printPreorder(n->left);
    printPreorder(n->right);
}

void printWholeTree(node *n){
    if(n==NULL){
        return;
    }
    cout<<n->data<<" ";
    printWholeTree(n->left);
    printWholeTree(n->right);

}

int main()
{
    //make root node
    node *root  = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->right->right = newNode(5);

    printWholeTree(root);

    PrintInorder(root);
    cout<<endl;

    printPostorder(root);
    cout<<endl;

    printPreorder(root);
    return 0;


   

}