#include <bits/stdc++.h>
using namespace std;
class Calculator{
    public:
    int add(int a, int b){
        return a+b;
    }
    string add(string a, string b){
        return a+b;
    }

        double add(double a, double b){
        return a+b;
    }

};

int main(){
    Calculator c1;
    cout<<"Sum is "<<c1.add(3,4)<<endl;

    Calculator c2;
    cout<<"Sum is "<<c2.add("Nilesh", " Pal");

} 