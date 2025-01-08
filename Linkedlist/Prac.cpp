#include <bits/stdc++.h>
using namespace std;
struct node {
    int data;
    node *next;

};

void deleteno(node ** head_ref, int key){
    node *temp, *prev;
    temp  = *head_ref;
    if(temp!=NULL && temp->data == key){
        *head_ref = temp->next;
        free(temp);
        return;
    }


    while(temp!=NULL && temp->data!=key){
        prev = temp;
        temp = temp->next;
    }
    if(temp == NULL){
        return;
    }
    prev->next = temp->next;
    free(temp);
    return;
}

void append(node **head_ref, int new_data){
    node *new_node  = new node();
    new_node->data = new_data;
    new_node->next = NULL;
    node *last  = *head_ref;
    if(*head_ref == NULL){
        *head_ref = new_node;
        return;
    }
    while(last->next!=NULL){
        last =  last->next;
    }
    last->next = new_node;
    return;
}
void insertmid(node *prev_node, int new_data){
    node *new_node = new node();
    new_node->data = new_data;
    new_node->next = prev_node->next;
    prev_node->next = new_node;

}

void pushfront(node **head_ref, int new_data){
    node * new_node  = new node();
    new_node->data = new_data;
    new_node->next = *head_ref;
    *head_ref = new_node;

}

// this wont work and it becomes complex
// node *pushfront(node *head, int new_data){
//     node *new_node = new node();
//     new_node->data = new_data;
//     new_node->next  =head;
//     head  = new_node;
//     return head;
// }

void printList(node *n){
    while (n!=NULL)
    {
        cout<<n->data<<" ";
        n = n->next;
    }
    
}
int main(){
    node *head = NULL;
    // head = pushfront(head, 1);
    // head = pushfront(head, 2);
    // head = pushfront(head, 3);
    // head = pushfront(head, 4);
    // head = pushfront(head, 5);

    pushfront(&head, 1);
    pushfront(&head, 2);
    pushfront(&head, 3);
    pushfront(&head, 4);
    pushfront(&head, 5);

    insertmid(head->next, 6);
    append(&head, 7);
    deleteno(&head, 3);
    

    

    printList(head);



} 