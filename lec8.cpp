// Factorial
#include <iostream>
using namespace std;
long factorialMethod(int num)
{
    if (num == 0 || num == 1)
    {
        return 1;
    }
    else
    {
        // cout << "\n  this is step" << num *factorialMethod (num - 1) <<"\n" ;
        // return num * factorialMethod(num - 1);
        long newFacto = 1;
        for (int i = num; i > 0; i--)
        {
            newFacto = newFacto * i;
        }
        return newFacto;
    }
}
int main()
{
    int facto;
    cout << "Enter a number to get Factorial";
    cin >> facto;
    long result = factorialMethod(facto);
    cout << "Factorial of number is = " << result;
}
