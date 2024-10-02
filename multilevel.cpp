#include <bits/stdc++.h>
using namespace std;
class Animal{
    public:
    int age ;
    int weight;
    public:
 void speak(){
    cout<<"Speaking"<<endl;
 }

};
class Dog : public Animal{


};

class gemran:public Dog{

};
int main(){
    gemran g;

} 