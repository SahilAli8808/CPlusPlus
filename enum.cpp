// switch according to shape
#include<iostream>
using namespace std;

enum shapes {
    circle,
    triagle,
    square
};

int x = 1;
int main(){
    {
        // int x = 20;
        int name = ::x;
        cout << "x in is: " << name; 
    }
    cout << "x is:" << x;

    



    return 0;

}