#include <bits/stdc++.h>
using namespace std;
class A{
 public:
 void fun1(){
    cout<<"fun1"<<endl;
 }
};

class B :public A{
    public:
    void fun2(){
        cout<<"fun2"<<endl;
    }

};
class C:public A{
    public:
    void fun3(){
        cout<<"fun3"<<endl;
    }
 
};

int main(){

    A ob1;
    ob1.fun1();

    B ob2;
    ob2.fun2();
    ob2.fun1();

    C ob3;
    ob3.fun1();
    ob3.fun3();


} 