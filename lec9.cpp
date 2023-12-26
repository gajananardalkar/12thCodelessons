#include <iostream>
using namespace std;
// swapping of two numbers
// a=10
// b=5
// afterswapp
// a=5
// b=10

int main()
{
    //with using 3rd varibale
    // int num1, num2, backup;
    // cout << "Enter first number";
    // cin >> num1;
    // cout << "first number = " << num1;

    // cout << "Enter second number";
    // cin >> num2;
    // cout << " second number" << num2;

    // backup = num1;
    // num1 = num2;
    // num2 = backup;

    // cout << " after swapping numbers are \n ";

    // cout << "first numbwe=" << num1;
    // cout << "\n 2nd number=" << num2;


    // without using 3rd variable
    int num1=30, num2=10;

    num1 = num1 + num2; //num1 =40
    num2 = num1-num2;   //num2= 30
    num1 = num1-num2; //num1 = 10

    cout << "after swapping";
    cout << num1 << "  " << num2;

}