#include<iostream>
using namespace std;


class thispointer{
        public:
        int i, j, k;

        void set (int i, int j, int k){
            this->i = i;
            this->j = j;
            this->k = k;
        }

        void print(){
            
            cout << "the value of i is : " << i << endl;
            cout << "the value of j is : " << j << endl;
            cout << "the value of k is : " << k << endl;
            cout << "the address of object is : " << this << endl;
        }
    };
// this keyword help distinguish between the parameters and the class members
int main(){
    


    thispointer obj2;
    obj2.set(10,11,12);
    obj2.print();
    
     
    
    return 0;
}