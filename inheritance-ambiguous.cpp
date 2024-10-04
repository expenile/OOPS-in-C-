#include <bits/stdc++.h>
using namespace std;

class A{
    public:
    void f1(){
        cout<<"Hi"<<endl;
    }

};
class B {
    public:
    void f1(){
        cout<<"Hello"<<endl; 
    }

};

class C: public A, public B{


};

int main(){
    C ob1;
    ob1.A::f1();
    ob1.B::f1();


} 