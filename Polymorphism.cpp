#include <iostream>
using namespace std;
class Shape{
public:
    virtual void showArea()
    {
        cout << "area of the shape"
             << "\n";
    }
};
class Circle : public Shape{
private:
    double radius;

public:
    Circle(double r) : radius(r){} //parameterised constructor
void showArea() override{
    double area = 3.14 * radius *radius;
    cout << "area of circle is =" << area;
}
};

int main(){
    Circle c(2);
    c.showArea();
}

// constructor = it get call immediatley when we create object, uses to intialise values, 
// constructor name should be same as classname