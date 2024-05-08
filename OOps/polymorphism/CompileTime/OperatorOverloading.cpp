#include<iostream>
using namespace std;


class Increase{
    private:
        int num;
    public:
        Increase(int n){
            num = n;
        }
        void display(){
            cout << "The number is: " << num << endl;
        }
        void operator ++(){
            num = num + 5;
        }
};

int main(){

    Increase num1(5);
    ++num1;
    num1.display();

    return 0;
}