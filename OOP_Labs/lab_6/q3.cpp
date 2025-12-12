#include<iostream>
#include<cmath>

using namespace std;

struct point{
    int x;
    int y;
};

struct Line{
   point p1;
   point p2;
};

void change_Position(Line *L, int newX, int newY)
{
   // (*L).p1.x = newX;
   // (*L).p1.y = newY;
    L->p1.x = newX;
    L->p1.y = newY;
}

int main(){
    Line l;
    l.p1.x = 5;
    l.p1.y = 7;

    l.p2.x = 8;
    l.p2.y = 10;

    change_Position(&l , 1 , 2);
    
    cout << "The new line point 1 : " << "newX in point 1 = " << l.p1.x << "   newY in point 1 = "
      << l.p1.y << '\n';
    cout << "the line length is : " 
         << sqrt((l.p2.x - l.p1.x)*(l.p2.x - l.p1.x) + (l.p2.y - l.p1.y)*(l.p2.y - l.p1.y)) << '\n';
    
    return 0;
}