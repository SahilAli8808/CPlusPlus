#include<iostream>
using namespace std;

int main(){
    int *ptr;
    int arr[] = {1, 2, 3, 4, 5};
    ptr = arr;

    for(int i=0; i<5; i++){
        cout << *ptr << endl;
        ptr++;
    }
    return 0;
}