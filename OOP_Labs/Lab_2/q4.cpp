#include<iostream>
#include<map>
using namespace std;
int main()
{
    cout << "Enter day number: ";
    int n;
    cin >> n;
    while (n < 1 or n > 7)
    {
        cout << "The number of day should be between 1 to 7\n";
        cout << "Enter day number: ";
        cin >> n;
    }
    map<int , string> days = {{1 , "sunday"} , {2 , "satrday"} , {3, "Monday"} ,
                             {4 , "Tusday"} , {5, "Wensday"} , {6 , "Tharsday"} , {7,"Friday"}};

    cout << days[n] << '\n';


    switch (n)
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
    return 0;
}