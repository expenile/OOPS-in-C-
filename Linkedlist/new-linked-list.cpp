#include <bits/stdc++.h>
using namespace std;

// diff bw vector and ll
// so in vector say size 5 , if we say we want 10 size vector , so first new storage will be allocated then copying the value of previous vector in this new vector takes place , but it is not optimal.


class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data =  data;
        this->next = NULL;
    }
};

void insertAtHead(Node* &head,int d){
    Node* temp  = new Node(d);
    temp->next  = head;
    head  = temp;
}

void insertAtTail(Node* &tail, int d){
        Node* temp  = new Node(d);
        tail->next = temp;
        tail  = temp;
}

void insertAtPosition(Node* &tail,Node* &head,int position, int d){

    //at first
    if(position == 1){
        insertAtHead(head,d);
        return;
    }

    Node* temp   = head;
    int cnt = 1;
    while( cnt < position -1){
        temp  = temp->next;
        cnt++;
    }

//inserting at last/end
    if(temp->next == NULL){
        insertAtTail(tail,d);
        return;

    }

    //creating node for d
    Node* nodetoInsert = new Node(d);
    nodetoInsert -> next =  temp->next;
    temp->next  = nodetoInsert;




}



void print(Node* &head){
    Node *temp  = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp  =  temp->next;
    }
    cout<<endl;

}

int main(){
    Node* node1  = new Node(7);

    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;

    Node *head   = node1;
    Node *tail  = node1;
    print(head); // before insertion at head

    insertAtHead(head, 12);
    print(head); // after insertion at head

    insertAtHead(head, 15);
    print(head);



    insertAtTail(tail, 21);
    print(head); // insertion at end

    insertAtTail(tail, 22);
    print(head);



    insertAtPosition(tail,head,1,8);
    print(head); // inserting at start with insert at any position

    insertAtPosition(tail,head,7,9);
    print(head); // inserting at end

    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;












} 