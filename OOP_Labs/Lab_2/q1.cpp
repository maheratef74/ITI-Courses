#include<iostream>
using namespace std;
int main()
{
    cout << "Enter number: ";
    int n;
    cin >> n;
    while (n < 0)
    {
        cout << "The number should be postive\n";
        cout << "Enter number: ";
        cin >> n;
    }
    switch (n%2)
    {
    case 1:
        cout << "The number is odd.\n";
        break;
    case 0:
        cout << "The number is even.\n";
    default:
        break;
    }
    return 0;
}