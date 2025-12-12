#include<iostream>
using namespace std;
int main()
{
    cout << "The allowed operations is 1-Withdraw \n 2-Deposit \n 3-Balance\n";
    int n; cin >> n;
    switch (n)
    {
    case 1:
        cout << "Withdraw\n";
        break;
    case 2:
        cout << "Deposit\n";
        break;
    case 3: 
        cout << "Balance\n";
        break;
    default:
        break;
    }
    return 0;
}