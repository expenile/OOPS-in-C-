#include <bits/stdc++.h>
using namespace std;
class Box{
    private:
    int width;
    public:
    Box(int w){
        width = w;
    }

    // friend fn declaration

    friend void printWidth(Box b);
};

void printWidth(Box b){
    cout<<"Width is "<<b.width<<endl;
}

int main(){

    Box b1(10);
    printWidth(b1);

} 