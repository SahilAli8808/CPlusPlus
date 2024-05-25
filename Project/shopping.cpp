#include<iostream>
using namespace std;

class items{
    int itemCode[10];
    int itemPrice[10];
    int itemcount;

    public:
    void count(){itemcount = 0;}
    void additem();
    void displaysum();
    void removeitem();
    void displayitem();

};

void items :: additem(){
    cout << "Enter item code :";
    cin >> itemCode[itemcount];
    cout << "Enter item cost: ";
    cin >> itemPrice[itemcount];
    itemcount++;
    // cout

}

void items :: displaysum(){
    float sum = 0;
    for (int i=0; i < itemcount ; i++){
        sum = sum + itemPrice[i];
    }
    cout << "Total value: " << sum << "\n";
}

void items :: removeitem(){

    int a;
    cout << "Enter item code: ";
    cin>> a;

    for(int i=0; i<itemcount; i++){
        if(itemCode[i] == a){
            itemPrice[i] =0;
        }
    }
    
}

void items :: displayitem(){
    cout << "\n Code Price \n";
    for (int i=0; i< itemcount; i++){
        cout << "\n" << itemCode[i];
        cout << "  " << itemPrice[i];
    }
    cout << "\n";
}

int main(){

    items order;
    order.count();
    int x;
    do{
            cout << "You Can do the following;" 
            << "Enter appropriate number \n";
            cout << "\n1 : add an item ";
            cout << "\n2 : display total value ";
            cout << "\n3 : Delete an item ";
            cout << "\n4 : display all item ";
            cout << "\n5 : Quit ";
            cout << "\n\n What is your option?";

            cin >> x;
            switch (x)
            {
            case 1:
                order.additem();
                break;
            case 2:
                order.displaysum();
                break;
            case 3:
                order.removeitem();
                break;
            case 4:
                order.displayitem();
                break;
            case 5:
                // order.additem();
                break;
            // case 2:
            default:
                cout << "Error in input; try again \n";
            }

    }while(x != 5);

    return 0;
}