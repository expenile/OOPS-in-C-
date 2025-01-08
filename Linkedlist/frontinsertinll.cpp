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

// node *push(node *head , int data){
//     node *new_node = new node();
//     new_node->data = data;
//     new_node->next = head;
//     head = new_node;
//     return head ;

// }

// void push(node **head_ref , int data){
//     node *new_node = new node();
//     new_node->data = data;
//     new_node->next = *head_ref;
//     *head_ref = new_node;

// }









void insertAtStart(node **head_ref, int new_data){
    node *new_node=  new node();
    new_node->data = new_data;
    new_node->next  = *head_ref;
    *head_ref = new_node;
}
    


int main(){
    node *head = NULL; 
    insertAtStart(&head, 5);
    insertAtStart(&head, 7);
    insertAtStart(&head, 9);
    insertAtStart(&head, 10);
    insertAtStart(&head, 11);
    insertAtStart(&head, 12);
    insertAtStart(&head, 13);
    insertAtStart(&head, 15);
    insertAtStart(&head, 23);
    printList(head);


    

}
