#include <iostream>
using namespace std;
// area of rectangle
class Area{
private:
    int length, width;
public:
    void paramter(int l, int b)    {
        length = l;
        width = b;
    }
    int RectArea()    {
        return length * width;
    }
    int SquareArea()    {
        return length * length;
    }
};
int main(){
    Area a;
    int l, w;
    cout << "enter value of length";
    cin >> l;
    cout << "enter value of width";
    cin >> w;
    a.paramter(l, w);
    cout << "area of rectangle is =" << a.RectArea();
    cout << "\n area of square is =" << a.SquareArea();
}

// bank acc, depoit show balance ani withdraw kar then again show balance