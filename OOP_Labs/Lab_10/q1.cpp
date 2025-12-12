#include<iostream>
using namespace std;
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

class Line{
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

class Rectangle{
    public:
      Point p1 , p2 , p3 , p4;

    Rectangle() {}

    Rectangle(int x1, int y1, int x2, int y2)
        : p1(x1, y1), p2(x2, y2), p3(x1, y2), p4(x2, y1) {}

    void draw() {
        cout << "Shape: Rectangle" << '\n';
        p1.Display();
        p2.Display();
        p3.Display();
        p4.Display();
    }
};

class Circle{
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
    Line* line;
    int noOfLine;

    Rectangle* rec;
    int noOfRec;

    Circle* circle;
    int noOfCircle;

public:
    Picture(Line* l, int lCount,
            Rectangle* r, int rCount,
            Circle* c, int cCount)
    {
        line = l;
        noOfLine = lCount;

        rec = r;
        noOfRec = rCount;

        circle = c;
        noOfCircle = cCount;
    }

    void Paint()
    {
        cout << "\nPainting Lines\n";
        for (int i = 0; i < noOfLine; i++) line[i].draw();

        cout << "\nPainting Rectangles\n";
        for (int i = 0; i < noOfRec; i++) rec[i].draw();

        cout << "\nPainting Circles\n";
        for (int i = 0; i < noOfCircle; i++) circle[i].draw();
    }
};

int main(){

    Line Larr[2] = {
        Line(1, 2, 3, 4),
        Line(0, 0, 5, 5)
    };

    Rectangle Rarr[2] = {
        Rectangle(0, 0, 4, 3),
        Rectangle(2, 2, 6, 6)
    };

    Circle Carr[2] = {
        Circle(5, 5, 3),
        Circle(10, 10, 7)
    };

    Picture pic(Larr, 2, Rarr, 2, Carr, 2);

    pic.Paint();

    return 0;
}