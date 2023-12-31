// return type
#include <iostream>
using namespace std;
int add(){
    int result = 11+13;
        cout << "before return";
    return result;
    cout << "after return";// this will not come in op window as we have written this after return.
}

int main(){
    int abc = add();
    cout << "result is =" << abc;
}

// String add1(){
//     return "abcd";
// }

// bool add2(){
//     return true;
// }
