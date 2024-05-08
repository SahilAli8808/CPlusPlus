#include<iostream>
using namespace std;


namespace MyfirtNamespace{

    void display(){
        cout << "Hello from MyfirtNamespace" << endl;
    }
}

int main(){
    MyfirtNamespace::display();
    return 0;
}