#include<iostream>
// overloading the operator
using namespace std;

class Space {
    int x, y, z;
    public:
    void getdata(int a, int b, int c){
        x = a;
        y = b;
        z = c;
    }
    void display(){
        cout << x << " " << y << " " << z << "\n";
    }
    void operator-(){
        x = -x;
        y = -y;
        z = -z;
    }
};

int main(){
    Space s;



    s.getdata(10, -20, 30);
    cout << "S before overloading the operator: ";
    s.display();

    -s;
    cout << "S after overloading the operator: ";
    s.display();

        
    return 0;
}