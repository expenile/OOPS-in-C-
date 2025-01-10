#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data  =data;
        this->next  =NULL;
    }

};

void insertAtHead(Node* &head, int d){
    Node *temp   =new Node(d);
    temp->next = head;
    head = temp;
}

void insertAtEnd(Node* &tail, int d){
    Node* temp  = new Node(d);
    tail->next= temp;
    tail  =temp;
}

void insertAtAnyPosition(Node* &head, Node* &tail,int d, int position){
    if(position ==1){
        insertAtHead(head,d);
        return;
    }

    Node* temp  =head;
    int cnt  =1;
    while(cnt < position -1){
        temp =temp->next;
        cnt++;
    }

    if(temp->next == NULL){
        insertAtEnd(tail,d);
        return;
    }

    Node* nodetoInsert = new Node(d);
    nodetoInsert ->next  =temp->next;
    temp->next  =nodetoInsert;
}


void print(Node* &head){
    Node* temp  = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;

}

int main(){

    Node *node1 = new Node(1);
    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;

    Node* head = node1;
    Node* tail = node1;

    print(head);


    //inserting at start
    insertAtHead(head, 2);
    print(head);

      insertAtHead(head, 4);
    print(head);


    insertAtEnd(tail,10);
    print(head);


    insertAtEnd(tail,11);
    print(head);

    insertAtAnyPosition(head,tail,100,6);
    print(head);








} 