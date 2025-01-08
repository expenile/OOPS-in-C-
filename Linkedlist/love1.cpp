// #include <bits/stdc++.h>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node *next;

//     Node(int data){
//         this->data = data;
//         this->next = NULL;
//     }

// };

// void insertsathead(Node* &head, int d){
//     Node* temp  = new Node(d);
//     temp->next = head;
//     head = temp;
// }

// //traversing the linked list
// void print(Node* &head){
//     Node* temp = head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }
//     cout<<endl;

// }
// void insertattail(Node* &tail, int d){
//     Node* temp = new Node(d);
//     tail->next = temp;
//     tail = temp;

// }

// void insertatmiddle(Node* &head,int position, int d){
//     Node* temp = head;
//     int cnt = 1;
//     while(cnt < position-1){
//         temp = temp->next;
//         cnt++;

//     }
//     Node* n = new Node(d);
//     n->next = temp->next;
//     temp->next = n;

// }

// int main(){
//     Node *node1 = new Node(3);
//     // cout<<node1->data<<endl;
//     // cout<<node1->next<<endl;

//     Node* head  = node1;
//     Node* tail = node1;
//     insertsathead(head, 2);
//     insertsathead(head, 1);
//     insertsathead(head, 0);
//     insertattail(tail, 4);
//     insertattail(tail, 5);
//     insertattail(tail, 6);
//     insertatmiddle(head, 4, 100);

//     print(head);

// }

#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "Memory is free for node with data" << value << endl;
    }
};

void insertAtHead(Node *&head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node *&tail, int data)
{
    Node *temp = new Node(data);
    tail->next = temp;
    tail = temp;
}

void insertAtMiddle(Node *&tail, Node *&head, int position, int data)
{

    // if we are told to insert at first position
    if (position == 1)
    {
        insertAtHead(head, data);
        return;
    }

    Node *temp = head;
    int count = 1;
    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    }
    // at the end the data is inserted but the tail is not updated
    if (temp->next == NULL)
    {
        insertAtTail(tail, data);
        return;
    }

    Node *toinsert = new Node(data);
    toinsert->next = temp->next;
    temp->next = toinsert;
}

// deletion
void deleteNode(int position, Node *&head)
{
    // deleting start node
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;

        delete temp;
    }
    else
    {
        // deleting any middle or last node
        Node *curr = head;
        Node *prev = NULL;
        int count = 1;
        while (count < position)
        {
            prev = curr;
            curr = curr->next;
            count++;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;

    print(head);

    insertAtTail(tail, 12);
    print(head);

    insertAtTail(tail, 15);
    print(head);

    insertAtMiddle(tail, head, 4, 22);
    print(head);

    cout << "head :" << head->data << endl;
    cout << "tail :" << tail->data << endl;

    deleteNode(3, head);
    print(head);
}