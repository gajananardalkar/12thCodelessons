// overloading
// compile time polymorphism

// function overloading

// #include <iostream>
// using namespace std;
// class Add
// {
// public:
//     int sum(int a, int b)
//     {
//         int result = a + b;
//         cout << "first method" << result << endl;
//         return a + b;
//     }
//     int sum(int a, int b, int c)
//     {
//         cout << "2nd method" << endl;
//         return a + b + c;
//     }
// };
// int main()
// {
//     Add add;
//     add.sum(2, 3);
//     int result = add.sum(2, 3, 4);
//     cout << "sec method op" << result << endl;
// }




// Operator Overloading

#include <iostream>
using namespace std;
class Add{
    private:
    int num1;

    public:
    Add():num1(5) {}

    void operator --(){
        num1 =num1-1;
    }

    void display(){
        cout << "addition is = " << num1 << endl;
    }

};

int main(){
    Add a;
    --a;
    a.display();
    return 0;
}