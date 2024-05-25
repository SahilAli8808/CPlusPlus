#include<iostream>
using namespace std;

class BankAccount{

    private:
    int CustomerId;
    char name[20];
    int age;

    public:
    void addnewCustomer();
    void deleteCustomer();
    void updateCustomer();
    void displayallCustomer();


};

void BankAccount :: addnewCustomer(){
    cout<< "Your Choice ===> Add New Customer\n";
    cout << "\nEnter Customer name: ";
    cin >> name;
     cout << "Enter Customer ID: ";
    cin >> CustomerId;
     cout << "Enter age: ";
    cin >> age;
    cout << "\nNew Customer Added Successfully!\n";


}

void BankAccount :: deleteCustomer(){

}

void BankAccount :: updateCustomer(){

}
void BankAccount :: displayallCustomer(){

}




int main(){
     
     BankAccount b1;
     int x;


     do
     {
        cout << "|---------------------------------------|" << "\n";
        cout << "|      Welcome to HDFC Bank             |" << "\n";
        cout << "|---------------------------------------|" << "\n";
        cout << "\nPress 1 : Add a new Customer ";
            cout << "\nPress 2 : Delete a Customer by ID";
            cout << "\nPress 3 : Update Customer information ";
            cout << "\nPress 4 : Display all Customers ";
            cout << "\nPress 5 : Quit ";
            cout << "\n\nEnter your Choice?\n";

            cin >> x;

            switch (x)
            {
            case 1:
                b1.addnewCustomer();
                break;
            case 2:
                cout << "You Entered! 2\n";
                break;

            case 3:
                cout << "You Entered! 3\n";
                break;

            case 4:
                cout << "You Entered! 4\n";
                break;
            default:
                cout << "--------------------------------------";
                cout  << "Invalid Number! Please Press Valid No\n";
                cout << "--------------------------------------";
                break;
            }

        
     } while (x != 5);
     


    return 0;

}