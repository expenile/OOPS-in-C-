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
void deleteNode(node **head_ref, int key){
    //initialize prev and temp
    node *prev, *temp;

    //store head to temp
    temp = *head_ref;
    //if key is present in head 
    if(temp!=NULL && temp->data==key){
        *head_ref = temp->next;
        free(temp);
        return;
    }

    //we trverse the linked list and keep track of previous node 
    //becouse we have to perform prev->next
    while(temp!=NULL && temp->data!=key){
        prev = temp;
        temp = temp->next;
    }

    // we traverse whole linked list and we didnt got the key
    if(temp==NULL) return ;
    //but if we found the key
    prev->next = temp->next;
    free(temp);



}

int main(){

    node *head = NULL; 
    push(&head, 5);
    push(&head, 7);
    push(&head, 9);
    push(&head, 23);
    push(&head, 90);
    push(&head, 239);

    // insertAfter(head->next, 8);
    printList(head);
    deleteNode(&head, 239);
    cout<<endl;
    printList(head);
    


}