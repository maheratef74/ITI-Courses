#include<iostream>
using namespace std;

class Shape {
public:
    virtual void draw() = 0;
};

class Point{
    private:
        int X , Y;

    public:
        Point(){ }   
        
        Point(int x, int y){
            X = x;
            Y = y;
        }

        void Display(){
            cout << "X = " << X << " ,  " << "Y = " << Y << '\n';
        }
};

class Line : public Shape{
    public:
      Point p1 , p2;

      Line(int x1, int y1, int x2, int y2)
        : p1(x1, y1), p2(x2, y2) {} 


    void draw() {
        cout << "Shape: Line" << '\n';
        p1.Display();
        p2.Display();
    }    
};

class Rectangle : public Shape{
    public:
      Point p1 , p2;

    Rectangle() {}

    Rectangle(int x1, int y1, int x2, int y2)
        : p1(x1, y1), p2(x2, y2) {}

    void draw() {
        cout << "Shape: Rectangle" << '\n';
        p1.Display();
        p2.Display();
    }
};

class Circle : public Shape{
    public:
        Point center;
        int r;

    Circle() : r(0) {}

    Circle(int x, int y, int radius)
        : center(x, y), r(radius) {}

    void draw() {
        cout << "Shape: Circle" << '\n';
        center.Display();
        cout << "Radius = " << r << '\n';
    }    
};

class Picture {
private:
   Shape* shape[100];
   int count = 0;

public:
    public:
    Picture() : count(0) {}

    void AddShape(Shape* s) {
        if (count < 100) shape[count++] = s;
    }

    void Paint() {
        cout << "\nPainting Picture\n";
        for (int i = 0; i < count; i++) shape[i]->draw();
    }
};

int main(){

    Picture pic;

    pic.AddShape(new Line(1, 2, 3, 4));
    pic.AddShape(new Rectangle(0, 0, 4, 3));
    pic.AddShape(new Circle(5, 5, 3));

    pic.Paint();
    
    delete &pic;
    return 0;
}