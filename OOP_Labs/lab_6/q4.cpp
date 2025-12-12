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

int main(){
    int size;
    cout << "Enter number of lines: ";
    cin >> size;

    Line lines[size];

    for(int i = 0; i < size; i++) 
    {
        cout << "\nPoint 1 Enter X: ";
        cin >> lines[i].p1.x;

        cout << "\npoint 1 Enter Y: "; 
        cin >> lines[i].p1.y; 


        cout << "\nPoint 2 Enter X: ";
        cin >> lines[i].p2.x;

        cout << "\npoint 2 Enter Y: "; 
        cin >> lines[i].p2.y; 
    }
    for(int i = 0; i < size; i++) 
    {
        cout << "line number " << i+1 << " the length is = " 
             << sqrt((lines[i].p2.x - lines[i].p1.x)*(lines[i].p2.x - lines[i].p1.x) 
             + (lines[i].p2.y - lines[i].p1.y)*(lines[i].p2.y - lines[i].p1.y)) << '\n';
    }
    return 0;
}