#include <iostream>
using namespace std;
#define PI 3.14159265358979323846

class Shape {
protected:
    int Dim1, Dim2;

public:
    Shape() : Dim1(0), Dim2(0) {}

    Shape(int d1, int d2) : Dim1(d1), Dim2(d2) {}

    float CalcArea() {
        return 0; 
    }
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

float TotalArea(Rectangle* r, Square* s, Circle* c,
                int noR, int noS, int noC)
{
    float total = 0;

    for (int i = 0; i < noR; i++) total += r[i].CalcArea();

    for (int i = 0; i < noS; i++) total += s[i].CalcArea();

    for (int i = 0; i < noC; i++) total += c[i].CalcArea();

    return total;
}

int main() {

    Rectangle* r = new Rectangle[2];
    r[0] = Rectangle(3, 4);
    r[1] = Rectangle(7, 8);

    Square* s = new Square[2];
    s[0] = Square(2);
    s[1] = Square(5);

    Circle* c = new Circle[2];
    c[0] = Circle(3);
    c[1] = Circle(6);

    float total = TotalArea(r, s, c, 2, 2, 2);

    cout << "Total Area = " << total << endl;

    delete[] r;
    delete[] s;
    delete[] c;
    
    return 0;
}
