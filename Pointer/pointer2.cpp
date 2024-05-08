// pointer
#include<iostream>
using namespace std;

int main(){
     int num1,num2;
        int *p1,*p2;
        p1=&num1;
        p2=&num2;
        cout<<"Enter two numbers: ";
        cin>>num1>>num2;
        cout<<"Sum = "<<*p1+*p2;
        // adding two numbers using pointers 
        // benefit of using pointers is that we can access the value of the variable without using the variable name
        // we can also change the value of the variable using pointers
        // we can also pass the address of the variable to the function using pointers
    return 0;

    }

