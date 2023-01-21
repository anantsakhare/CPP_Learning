#include<iostream>

using namespace  std;

int main(){

    // Arthemtic operations
    int a =  102; 
    int b =  20;

    cout<<" Addition of two numbers  "<<a+b<<endl;
    cout<<" Subtraction of two numbers  "<<a-b<<endl;
    cout<<" Product of two numbers  "<<a*b<<endl;
    cout<<" Division of two numbers  "<<a/b<<endl;
    cout<<" reminder of two numbers  "<<a%b<<endl;

    // relation operator
    cout<<" num1 is equal  num2  "<<(a==b)<<endl;
    cout<<" num1 is not equal to num2  "<<(a!=b)<<endl;
    cout<<" num1 is greater than num2   "<<(a>b)<<endl;
    cout<<" num1 is lesser than num2  "<<(a<b)<<endl;
    cout<<" num1 is greater than  or equal to num2  "<<(a>=b)<<endl;
    cout<<" num1 is lesser than  or equal to num2  "<<(a<=b)<<endl;

    //  Logical operators
    cout<<" num1 is equal  num2 and  num1 is equal  num2 "<<((a==b) &&  (a==b)) <<endl;
    cout<<" num1 is equal  num2  "<<((a==b) ||  (a!=b)) <<endl;
    cout<<" num1 is equal  num2  "<<(! (a==b) ) <<endl;

    // Assignment operator
    int num1 = 20;
    cout<<" +=   "<<(num1+=3)<<endl;
    cout<<" -=  "<<(num1-=3)<<endl;
    cout<<" *=  "<<(num1*=3)<<endl;
    cout<<" /= "<<(num1/=3)<<endl;
    cout<<" %=  "<<(num1%=3)<<endl;

    //  bitwise operator
    num1 = 5;
    cout<<" Left shift  "<<(num1<<1)<<endl;
    cout<<" right shift  "<<(num1>>1)<<endl;

    int num2 = 8;
    cout<<" And  "<<(num1&num2)<<endl;
    cout<<" or  "<<(num1|num2)<<endl;

    // Misc Operators
    cout<<" Size of Num1   "<<(sizeof(num1))<<endl;    

    int flag;

    num1==num2 ? flag = 10 :flag = 20;
    cout<<" Turnery  "<<(flag)<<endl;

    cout<<" Address  of Num1   "<<(&(num1))<<endl;    


    // unary operators

    int x ;
    x= 5;
    cout<<" Pre Increment  "<<(++x)<<endl;
    x = 5;
    cout<<" Post Increment  "<<(x++)<<endl;
    cout<<" After post Increment  "<<(x)<<endl;

    x= 5;
    cout<<" Pre Increment  "<<(--x)<<endl;
    x = 5;
    cout<<" Post Increment  "<<(x--)<<endl;
    cout<<" After post Increment  "<<(x)<<endl;

    //  Associativity in C ++

    cout<<"Checking associativity of 4 +  2 + pqr  "<<(4 + 2 / 'pqr')<<endl;
    cout<<"Checking associativity of  pqr  + 4 +  2  "<<( 'pqr' + 4 + 2)<<endl;

    return 0;
}