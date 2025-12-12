#include<iostream>
using namespace std;
int main()
{
    cout << "Enter your grad: ";
    int grad;
    cin >> grad;
    while (grad > 100 or grad < 0)
    {
        cout << "The grad should be between 1 to 100\n";
        cout << "Enter grad: ";
        cin >> grad;
    }
    switch (grad/10)
    {

        case 10:
        case 9:
          cout << "Excellent\n";
          break;
        case 8:
        case 7: 
            cout << "Very good\n";
            break;
        case 6:
            cout << "good\n";
            break;
        case 5:
            cout << "Pass\n";
            break; 
            
        default:
            cout << "Sorry you did not pass.\n";
            break;
    }
    return 0;
}