/*

#include <bits/stdc++.h>
using namespace std;

// capability of a classs to derive property and characteristics from another class



Base        Child         PPP
public      public        public
public      protected     protected
public       private       private
protected    public       protected 
protected    protected    Protected
protected   private        private




    class Human
    {
        private:
        int a;

        protected:
        int b;

        //still this function accessible in mai function 
        //    void fun(){
        //     a  =10;
        //     b=  20;
        //     c  =30;
        // }

        public:
        int c;

        void fun(){
            a  =10;
            b=  20;
            c  =30;
        }
    };

    class Student : public Human{


    };
int main()
{
    Human Rohit;
    // Rohit.a  =10;
    // Rohit.b  = 10;

    Rohit.c =10;
}

*/


#include <bits/stdc++.h>
using namespace std;
class Human{
    public:
    string name;
    int age,weight;

};

class Student : private Human{
    int roll,fees;
    public:
  void fun(string n, int a ,int w){
    name=  n;
    age  = a;
    weight  =w;

    }
    void display(){
        cout<<name<<" "<<age<<" "<<weight<<endl;
    }

};

int main(){
    Student A;
    A.fun("NIlesh", 21, 70);
    A.display();


} 