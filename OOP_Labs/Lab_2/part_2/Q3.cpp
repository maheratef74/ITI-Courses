#include<iostream>
using namespace std;
int main()
{
    cout << "Enter five postive numbers\n";
    int n , sum = 0;
    for(int i = 0; i < 5; i++)
    {
        cin >> n;
        sum += n;
    }
    cout << "the sumations = " << sum << '\n'; 
    return 0;
}