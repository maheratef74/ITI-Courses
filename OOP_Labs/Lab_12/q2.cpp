#include<iostream>
using namespace std;

class problem{
  public:
    int p;
};

class parent1 : virtual public problem{
public:
   
};

class parent2:virtual  problem{
public:
    
};

class child : public parent1, public parent2 {
public:
child(){
    p = 10;
    //p = 20;
}
};

int main()
{
    child c;
    c.parent1::p;
    c.parent2::p; 

    return 0;
}