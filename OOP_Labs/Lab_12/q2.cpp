#include<iostream>
using namespace std;

class problem{

};

class parent1{
public:
    problem p;
};

class parent2{
public:
    problem p;
};

class child : public parent1, public parent2 {

};

int main()
{
    child c;
    c.parent1::p;
    c.parent2::p; 

    return 0;
}