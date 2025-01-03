#include <bits/stdc++.h>
using namespace std;
class Counter{
    public:
    static int count;
    Counter(){
        count++;
    }

    static void giveCount(){
        cout<<"Count is "<<count<<endl;
    }
};

int Counter::count  = 0;

int main(){
    Counter c1, c2,c3;
    
    // accessing static member through object
    cout<<c1.count<<endl;
    cout<<c2.count<<endl;
    cout<<c3.count<<endl;

    //accessing static member function through class

    Counter::giveCount();
    cout<<Counter::count<<endl;


} 