// explaination about char* and char[]
// char* is a pointer to a character. It can be used to store a string but it is not a string. It is a pointer to a character.
// char[] is an array of characters. It can be used to store a string. It is a string.
//
#include<iostream>
#include<string>
using namespace std;

int main(){
    char* name = "John";
    // above line is about char* that 
    char name2[] = "John";
    cout << name << "\n";
    cout << name2 << "\n";
    return 0;
}

