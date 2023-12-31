// Constructor= 1.default 2.Paramterised
#include <iostream>
using namespace std;
class NewClass{

public:
    // Default cons
    NewClass(){
        cout << "Default constructoer";
    }

    // param cons
    NewClass(int num){
        cout << "param constructoer";
    }
};

int main(){
    NewClass nw;// when we create this obj defau;t constructor will get call 
    NewClass nw1(2);// Passing parameter to Param constructor
} // after this scope ends destructor will get automatically call for objects nw and nw1