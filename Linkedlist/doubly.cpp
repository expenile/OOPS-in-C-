#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *next;
    node *prev;
};
// every node has a prev pointer and a next pointer 

// in linked list we can only move in one direction but in doubly linked list we can move in both directions
//ll-unidirectional movement
//dll-bidirectional movement

//we can easily insert a node before a given node

void push(node **head_ref, int new_data){
    node *new_node = new node();
    new_node->data = new_data;
    new_node->next = *head_ref;
    new_node->prev = NULL;
    if(*head_ref != NULL){
        (*head_ref)->prev = new_node;
    }
    *head_ref = new_node;
}
void printList(node *n){
    int count  = 0;
    while(n!=NULL){
        cout<<n->data<<" ";
        n = n->next;
        count++;  
    }
    cout<<"No of elements in linked list is:"<<count<<endl;
    

}

void insertAtMiddle(node *prev_node , int new_data){
    if(prev_node == NULL){
        cout<<"The given previous node cannot be NULL";
        return;
    }
    node *new_node = new node();
    new_node->data = new_data;
    new_node->next = prev_node->next;
    prev_node->next = new_node;
    new_node->prev = prev_node;
    if(new_node->next != NULL){
        new_node->next->prev = new_node;
    }
}
int main(){
    node *head = NULL;
    push(&head, 2);
    push(&head, 4);
    push(&head, 8);
    push(&head, 10);
    printList(head);

    insertAtMiddle(head->next, 5);
     printList(head);
    

}
