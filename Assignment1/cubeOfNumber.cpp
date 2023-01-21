#include<iostream>

using namespace std;

// Write a C++ program to calculate the cube of a number.

int main() {

    int size; 

    cin>>size;

    int cube_val = size * size * size;
    
    cout<<"Cube of "<<size<<" is "<<cube_val<<endl;

    return 0;
}