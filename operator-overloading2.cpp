#include <bits/stdc++.h>
using namespace std;


class Complex{
    private:
    int real;
    int imag;

    public:
    void input(){
        cout<<"Enter real and imaginery parts respectively : ";
        cin>>real;
        cin>>imag;

    }

    Complex operator + (Complex obj){
        Complex temp ;
        temp.real =   real + obj.real;
        temp.imag = imag  + obj.imag;
        return temp;
    }

    void output(){
        cout<<"Output is : "<<real<<"+"<<imag<<"i";
    }
};

int main(){
     Complex c1, c2, res;
    cout<<"Enter the first complex number \n";
    c1.input();
    cout<<"Enter the Second complex number \n";
    c2.input();

    res  = c1+ c2;
    res.output();

    return 0;



} 