#include<iostream>

using namespace std;

int main() {

    int a, b;
    // take user input of value a and value b
    cout<<"a: ";
    cin>>a;
    cout<<"b: ";
    cin>>b;


    int c;
    c = a; 
    a = b;
    b = c;

    cout<<"a: "<<a<<endl;
    cout<<"b: "<<b<<endl;

    return 0;
}