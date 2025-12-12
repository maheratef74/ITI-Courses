#include<iostream>
using namespace std;

void printLine(char ch = '_' , int count = 10)
{
    for(int i = 0; i < count; i++)
    {
       cout << ch;
    }
}
int main(){
    cout << "start function\n";
    printLine('_' , 15);
    cout << "\nEnd function\n";
    return 0;
}