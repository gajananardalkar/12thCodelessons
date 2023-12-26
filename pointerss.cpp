// pointers are variable that stores memory address

#include <iostream>
using namespace std;
// value
void increment(int num1){
    num1++;
}
// reference
void decrement(int &a){
    a--;
}

void swapping(int &x, int &y){
    int result = x;
    x=y;
    y=result;
}

int main()
{
    // int num1 = 10;
    // int num2 = 20;
    // int *ptr = &num1;
    // int *addr = &num2;
    // int value = *ptr; // here we are assigning value i.e. 10 tp VALUR variable
    // cout << addr;     // this will print address of num2
    // addr++;
    // cout << ++addr;

    // aaray and pointers
    // int arr[5]= {1,2,3,4,5};
    // int *arrPtr = arr;
    // cout << arrPtr;// it will print address of 1st element
    // arrPtr++;
    // cout << arrPtr;


// call by value and :
int num = 10;
increment(num); // function call
cout <<"num" << num;

// call by reference
int ref = 5;
decrement(ref);
cout  <<"\n ref" << ref;


// swapping using call by reference
int x = 50, y= 90;
swapping(x,y);
cout << "x=" << x << "=y=" << y;

// post & pre increment

int z= 10;
// cout << "\n"<< z++;
//  cout << z;

 int u = z++ + ++z +z +z++;
cout << " " << u;
}

