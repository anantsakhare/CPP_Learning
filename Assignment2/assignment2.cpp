#include<iostream>

using namespace std;

int main()  {
    // Q1 - Write a program to check whether two numbers (entered by user) are equal or not (0 for not equal, 1  for equal)

    int num1, num2; 

    cout<<"num1 : ";
    cin>>num1;
    cout<<"num2: ";
    cin>>num2;

    bool compare_;
    compare_ = num1 == num2;
    cout<<"num1 is equal to num2:  "<<(compare_)<<endl;
    
    // Q2 - Write a program to take the values of two variables a and b from the keyboard and then check if both the  conditions 'a < 50' and 'a < b' are true.

    int a, b;
    
    cout<<"a : ";
    cin>>a;
    cout<<"b: ";
    cin>>b;

    ;

    cout<<"Q2  "<<(((a < 50) && (a < b))?1:0)<<endl;


    // Q3 - There are 45 total pupils in the class, 25 of whom are boys. Write a program to find how many girls received grades "A" if 17 boys made up 80% of the students that received grades "A".

    int  total_count, boys, girls, percentage, total;

    total_count = 45;
    boys = 17;
    percentage = 80;

    total = (percentage * total_count) / 100 ;

    girls = total -  boys;

    cout<<"Total number of girls who scored more A grade in exam is "<<girls<<endl;

    // Q4 - Write a program to calculate the sum of the first and the second last digit of a 5 digit number.

    int five_digit_num;

    cout<<"Enter a five digit num:  ";
    cin>>five_digit_num;

    int first_num, second_last_num, sum;

    first_num = five_digit_num / 10000; // first digit
    five_digit_num = five_digit_num % 10000;
    // five_digit_num = five_digit_num / 1000; // second digit
    five_digit_num = five_digit_num % 1000;
    // five_digit_num = five_digit_num / 100;// Third Digit
    five_digit_num = five_digit_num % 100; 
    second_last_num = five_digit_num / 10; // fourth digit 
    five_digit_num = five_digit_num % 10; // fifth digit

    sum = second_last_num +  first_num;


    cout<<"sum of the first and the second last digit of a 5 digit number  "<<(sum)<<endl;

    // Q5 - write a program to calculate the sum of digits of a 3 digit number.

    int three_digit_num;

    cout<<"Enter a Three digit num:  ";
    cin>>three_digit_num;

    int second_num, last_num;

    first_num = three_digit_num / 100;
    three_digit_num = three_digit_num % 100;

    second_num =  three_digit_num / 10; 
    last_num =  three_digit_num % 10; 

    sum = first_num + second_num + last_num;

    cout<<"sum of the first and the second last digit of a 5 digit number  "<<(sum)<<endl;

    // Q6 - Design a calculator to perform basic arithmetic operations (+,-,/,*)

    int sub, multi, div, remid;
    cout<<"num1 : ";
    cin>>num1;
    cout<<"num2: ";
    cin>>num2;

    sum = num1 + num2;
    sub = num1 - num2;
    multi = num1 * num2;
    div = num1 / num2;
    remid = num1 % num2;


    cout<<"Addition of "<<num1<<" and "<<num2 << " is "<<sum<<endl;
    cout<<"Sub of "<<num1<<" and "<<num2 << " is "<<sub<<endl;
    cout<<"Multiplication of "<<num1<<" and "<<num2 << " is "<<multi<<endl;
    cout<<"Division of "<<num1<<" and "<<num2 << " is "<<div<<endl;
    cout<<"Reminder of "<<num1<<" & "<<num2 << " is "<<remid<<endl;


    return 0;


}

