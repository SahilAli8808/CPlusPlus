#include<iostream>
using namespace std;


int main(){
    class Person{
        char name[20];
        int age;
        public:
        void getdata(){
            cout << "Enter your name: ";
            cin >> name;
            cout << "Enter your age: ";
            cin >> age;

        }
        void showeligiblity(){
            // checking eligible for vote or not?
            if(age>18){
                cout << "---------------------------------------------------" << "\n";
                cout << "Congrats! " << name << "\n" <<"You are eligible for vote!" << "\n";
                cout << "---------------------------------------------------" ;
            }else{
                cout << "---------------------------------------------------" << "\n";
                cout << "Hey " << name << " You are not eligible!";
                cout << "---------------------------------------------------";
            }

        }


    };

    Person person1;
    person1.getdata();
    person1.showeligiblity();



    return 0;
}