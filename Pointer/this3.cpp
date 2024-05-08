#include<iostream>
using namespace std;

class MyClass{
    public:
        void call();
        void myMethod(){
            cout << "Hello World!" << endl;
            this->call();
        }

};

void MyClass::call(){
    cout << "Hello from call" << endl;
}


int main(){
    MyClass myObj;
    myObj.myMethod();
    return 0;
}
