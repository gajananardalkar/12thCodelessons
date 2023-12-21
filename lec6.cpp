// local SCope
// Global Scope


#include <iostream>
using namespace std;

int main()
{
     int max, min;  //Global variable - Global scope

    int size = 6;
    int numbers[size] = {3, 6, 19, 2, 10, 14};

    for (int i = 0; i < size; i++)
    {
        int abc; //local variable
    }
    cout << "max number"
         << "\n"
         << max << "\n";
    cout << "min number"
         << "\n"
         << min;
}