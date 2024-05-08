#include<iostream>
using namespace std;

int main(){
    for(int i = 0; i < 5; i++){
        cout << "Hello World!" << i << endl;
        if(i == 3){
            break;  // This will break(terminate) the loop when i is 3
        }
    }
    return 0;
}