#include<iostream>
using namespace std;

class GreandParent{
    int x;

    public:
        int y;

    protected:
        int z;
    
};

class Parent : private GreandParent{
    public:
        Parent(){
            //x = 1; 
            y = 3; 
            z = 4; 
        }


};

class child : public Parent{
    public: 
        child(){
            //x = 5; 
            y = 6; 
            z = 7; 
        }
};

int main()
{
    Parent p;
    p.x = 10; 
    p.y = 20; 
    p.z = 30; 

    return 0;
}