#include<iostream>
#include<fstream>
using namespace std;


int main(){
    ofstream fout;
    fout.open("country");
    fout << "United States of America" << endl;
    fout << "United Kingdom" << endl;
    fout << "India" << endl;

    fout.close();

    fout.open("capital");
    fout << "Washington" << endl;
    fout << "London" << endl;
    fout << "New Delhi" << endl;

    fout.close();

    // reading the file
    const int n = 80;
    char line[n];

    ifstream fin;
    fin.open("country");
    cout << "Contents of country file: \n";
    while(fin){
        fin.getline(line, n);
        cout << line << "\n";
    }
    fin.close();

    fin.open("capital");
    cout << "Contents of capital file: \n";
    while(fin){
        fin.getline(line, n);
        cout << line << "\n";
    }
    fin.close();

    return 0;





}