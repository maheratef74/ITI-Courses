#include<iostream>
using namespace std;
int main()
{
    for(int i = 1; i <= 10; i++)
    {
       string message = (i%2) ? "odd" : "eveen";
       cout << message << '\n';
    }
    return 0;
}