#include<iostream>
#include<map>
using namespace std;
int main()
{
      map<int , string> days = {{1 , "sunday"} , {2 , "satrday"} , {3, "Monday"} ,
                             {4 , "Tusday"} , {5, "Wensday"} , {6 , "Tharsday"} , {7,"Friday"}};
    for(int i = 1; i <= 7; i++)
    {
        //cout << days[i] << '\n';

    switch (i)
    {
        case 1:
            cout << "Sunday\n";
            break;
        case 2:
            cout << "Satrday\n";
            break;
        case 3: 
            cout << "Monday\n";
            break;
        case 4: 
            cout << "Thusday\n";
            break;
        case 5:
            cout << "Wensday\n";
            break;
        case 6:
            cout << "Tharsday\n";
            break;
        case 7:
            cout << "Friday\n";
            break;
        default:
            break;
     }
    }
    return 0;
}