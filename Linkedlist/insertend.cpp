#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *next;
};

void printList(node *n){
    while(n!=NULL){
        cout<<n->data<<" ";
        n = n->next;
    }
}

void push(node **head_ref , int data){
    node *new_node = new node();
    new_node->data = data;
    new_node->next = *head_ref;
    *head_ref = new_node;

}


void insertAfter(node *prev_node, int new_data){
    node *new_node = new node();
    new_node->data = new_data;
    new_node->next = prev_node->next;
    prev_node->next = new_node;


}

 void append(node **head_ref, int new_data){
        node *new_node = new node();
        node *last = *head_ref;
        new_node->data = new_data;
        new_node->next = NULL;
        if(*head_ref == NULL){
            *head_ref = new_node;
            return;
        }
        while(last->next != NULL){
            last = last->next;
        }
        last->next = new_node;
        return;
    
 }
int main(){

    node *head = NULL; 
    push(&head, 5);
    push(&head, 7);
    push(&head, 9);

    insertAfter(head->next, 8);
    append(&head, 10);
    printList(head);


}