#include <iostream>
using namespace std;
#define PI 3.14159265358979323846

class Shape {
protected:
    int Dim1, Dim2;

public:
    Shape() : Dim1(0), Dim2(0) {}

    Shape(int d1, int d2) : Dim1(d1), Dim2(d2) {}

    virtual float CalcArea() = 0; //pure virtual
};

class Rectangle : public Shape {
public:
    Rectangle() {}

    Rectangle(int w, int h)
        : Shape(w, h) {}

    float CalcArea(){
        return Dim1 * Dim2; 
    }
};

class Square : public Shape {
public:
    Square() {}

    Square(int side)
        : Shape(side, side) {}

    float CalcArea(){
        return Dim1 * Dim1;
    }
};

class Circle : public Shape {
public:
    Circle() {}

    Circle(int radius)
        : Shape(radius, 0) {}

    float CalcArea(){
        return PI * Dim1 * Dim1;
    }
};

float TotalArea(Shape* shape[] ,int count)
{
    float total = 0;

    for (int i = 0; i < count; i++) total += shape[i]->CalcArea();

    return total;
}

int main() {

    Shape* shape[6];
   
    shape[0] = new Rectangle(3, 4);
    shape[1] = new Rectangle(7, 8);

    shape[2] = new Square(2);
    shape[3] = new Square(5);

    shape[4] = new Circle(3);
    shape[5] = new Circle(6);

    float total = TotalArea(shape, 6);

    cout << "Total Area = " << total << endl;

    for (int i = 0; i < 6; i++) delete shape[i];   
    return 0;
}
