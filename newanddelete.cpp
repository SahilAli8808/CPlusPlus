// in cpp malloc and calloc and free() fucntion nhi hota hai 
// iski jagah hm log new and delete function use karke memory manage karte hai

#include<iostream>
using namespace std;

int main(){
    int number = 10;
    int *numadd = &number;
    // concept of new
    numadd = new int;
    // ab new operator allocate sufficient memory to hold a data obj of type data type

    cout << "number is: " << numadd;
    // return 0;
}