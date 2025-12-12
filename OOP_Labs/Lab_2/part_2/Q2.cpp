#include<iostream>
using namespace std;
int main()
{
    int n; cin >> n;
    for(int i = 1; i <= 12; i++)
    {
        cout << i << " * " << n << " = " << i*n << '\n';
        switch (i)
        {
        case 6:
            cout << "Halfway there\n";
            break;
        case 12:
            cout << "Done. \n";
            break;
        default:
            break;
        }
        
    }
    return 0;
}