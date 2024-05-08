// all about string in cpp
#include <iostream>
using namespace std;

int main(){
    string name;
    cout << "Enter your name: ";
    getline(cin, name);

    name.push_back('$'); // name += '!'; (same as this line)

    cout << "Your name is Push back " << name << endl;
    name.pop_back(); // name.erase(name.size() - 1); (same as this line)
    cout << "Your name is pop back " << name << endl;

    
    cout << "Hello " << name << "!" << endl;
    return 0;
}