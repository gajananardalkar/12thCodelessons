#include <iostream>
using namespace std;
class Animal{
    public:
    void eat(){
        cout << "animals eat alot";
    }
    void type(){
        cout << "this is wild animal";
    }
    private:
    void exception(){
        cout << "this is exception";
    }
};
class Dog : public Animal{
    public:
    void bark(){
         cout << "this is dogs sound";
    }
    void type(){
        cout << "you can pet this animal";
    }
};
class Lion : public Animal{
    public:
    void roar(){
        cout << "lions sound";
    }
};
int main(){
    Lion d;
    d.roar();
    d.eat();
    d.type();
}

// car, types