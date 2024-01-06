// polymorphism = 1.overriding 2.overloading
// overriding = different class, same function/ method name
// overloading = same class, same method name, but parameters are different

// override
// run time polymorphism

#include <iostream>
using namespace std;
class Shape{ //base class
public:
// use virtual keyword when you re using pointer
    virtual void showArea()
    {
        cout << "area of the shape"
             << "\n";
    }
};

//derive class
class Circle : public Shape{
private:
    double radius;

public:
    Circle(double r) : radius(r){} //parameterised constructor

void showArea() {
    double area = 3.14 * radius *radius;
    cout << "area of circle is =" << area;
}
};

int main(){
   // Circle c(2);
   // c.Shape::showArea();// it will help to call base class function by using derve class obj

    // by using pointer/ virtual keyword is necessary 
    Shape *ptr; // we have created pointer obj of Base class, so that we can call function of derived class using this pointer object.
    Circle c(2); // circle class obj
    ptr = &c; // assign address of class Circle in pointer obj 
    ptr->showArea(); //using arrow call we have called deriver class function using base class object
}

// constructor = it get call immediatley when we create object, uses to intialise values, 
// constructor name should be same as classname