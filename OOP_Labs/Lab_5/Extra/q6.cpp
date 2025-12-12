#include<iostream>
using namespace std;
struct Time
{
   int hours;
   int minuts;
};

int main(){
    Time t1 = {5 , 40} , t2 = {6 , 50};
    Time timeDiference;
    timeDiference.hours = t2.hours - t1.hours;
    timeDiference.minuts = t2.minuts - t1.minuts;
    cout << "the difference between the two time is: " << timeDiference.hours << " : " << timeDiference.minuts <<'\n'; 

    return 0;
}