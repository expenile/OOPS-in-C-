#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node(int x) : data(x), next(nullptr){};
};

class Solution{
    public:
    Node *reversell(Node* head){
        Node* prev  =nullptr;
        Node* curr  =head;
        Node* next = nullptr;
        while( curr != nullptr){
            next  =curr->next;
            curr->next  =prev;
            prev  =curr;
            curr  =next;
        }
        return prev;

    }
};

void print(Node* head){
    while(head != nullptr){
        cout<<head->data<<" ";
        head  = head->next;
    }
    cout<<endl;
}

int main(){
    Node* head  =new Node(1);
    head->next  =new Node(2);
    head->next->next  =new Node(3);
    head->next->next->next  =new Node(4);
    head->next->next->next->next =new Node(5);
    print(head);

    Solution s;
    Node* reverseHead = s.reversell(head);
    print(reverseHead);


} 