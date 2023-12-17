#include <iostream> //its like pkg,
#include <string>
// comments

/*multi __LINE__
comment*/

using namespace std;

int main(){
    string fullName = "Nikhil Ghule";
    int marks = 90 , outOfMarks = 100;
    double percentage = 92.22;
    bool passed = true;
    char division = 'A';

    
    // cout << "Hi , My name is " << fullName << " i am in division " << division << " i got " << marks <<" marks in CS out of " << outOfMarks << " and i got " << percentage <<" percentage " << " and my staus of result pass is " << passed ;
    // ----------------------------------------------
    // Addition of numbers


    // int a,b,result
    // result =a+b
    // print result

    int num_1 =15, _num2 = 45 , result = 0;
    result = num_1 + _num2;
    // cout << " \n Addition of number is = " << result ;


    // varibales decalration rule:
    // can contain number, unerscroe, letter
    // first letter should be alphabetor underscore
    // we cant use keywords, datatypes and can not include  special charcter and white space

// constant

const int phone_num = 123456;

// phone_num = 789456; // this will throw err, as we can not upadte values that decalre with const keyword

// Area of circle = pi* r*2

// declare pi and radius
// area varibale to store area
//  area = pi* r*2
// cout area

const double pi = 3.14;
 int radius  = 4; double Area;
 Area = pi*radius*radius;
//  cout << "\n area of circle is:" << Area ;


//  user input
int a, b,c;
// cout << "Enter first number"; //cout = see out it helps to print output
cin >> a; // cin = see in, it helps to take input in particular variable
// cout << " Enter second number";
cin >> b;
// cout << "addition of number is=" << a+b;


// String
string firstname= "John";
string lastname= "Cena";
cout << "full name is ="+ firstname + " " + lastname;

}
// \n helps us to move/ print on next line

//int= whole number store
// double = floating number 1.2 19.6
// char  = saves charcater 'a'  'b'
// string = saves words/liines/texts  "nikhil ghule"
//bool = boolean true/false

//type  variableName = value


// Homework = addition, subtraction, mul, divi , Area of circle take input from user

//Operators:

//+,-,*,/-division (quotient), % -modulo (remender)
//18/2 =9
//19%2 =1
// &&- and operator - when both/all conditions are true then it will give "true"
// eg 5>2 && 10>12 -false
//  5>2 && 8>3 - true

// || - OR operator - if any one condition get satisfy it will return "TRUE"