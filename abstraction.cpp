/*

abstraction: hiding the implementation details of a class

abstraction hides all unnecessary details and only shows the necessary details(important) of the object.

eg: access modifiers: public, private, protected

abstract class: these cannot be instantiated, they can only be inherited

*/


#include <bits/stdc++.h>
using namespace std;
class Shape{
    public:
    virtual void show() = 0;

};

class Circle : public Shape{
    public:
void show(){
    cout<<"Circle called"<<endl;
}
};

int main(){

    Shape *s1 = new Circle();
    s1->show();

    delete s1;
} 