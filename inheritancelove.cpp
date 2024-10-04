#include <bits/stdc++.h>
using namespace std;
class Human{
    public:
    private:
    int height;
    int weight;
    // private:
    int age;
    int getAge(){
        return this->age;
    }
     void steWeight(int w){
        this->weight =w;
    }
};
class Male : private Human{
    public:
    string color;
    void sleep(){
        cout<<"Male sleeping"<<endl;
    }
    int getHeight(){
        // return height;
    }
}; 
// private member of any class cannot be inherited
int main(){

    Male m1;
    
    






    // cout<<m1.height<<endl;











    // cout<<m1.getHeight()<<endl;
    // cout<<m1.color<<endl;
    // m1.sleep();

    

    




    /*
    Male obj1;
    cout<<obj1.age<<endl;
    cout<<obj1.weight<<endl;
    cout<<obj1.height<<endl;

    cout<<obj1.color<<endl;
    obj1.steWeight(100);
    cout<<obj1.weight<<endl;
    obj1.sleep();

    */

} 