#include <iostream>
using namespace std;
class Even{
public:
    int number;
    void checkEvenNumber(){
        if (number > 0){
            if (number % 2 == 0){
                cout << "This is even number";
            }else{
                cout << "THis is odd number";
            }
        }else{
            cout << "Please enter valid number";
        }
    }
};
int main(){
    Even ev;
    cout << "Please enter a number";
    cin >> ev.number;
    ev.checkEvenNumber();    
}