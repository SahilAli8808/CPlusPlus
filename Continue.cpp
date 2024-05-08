#include<iostream>
using namespace std;

int main(){
    for(int i = 0; i < 5; i++){

        if(i == 3){
            continue; // This will skip the rest of the code in the loop when i is 3
        }
        cout << "Hello World!" << i << endl;



    }
    return 0;
}