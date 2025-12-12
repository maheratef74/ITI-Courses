#include<iostream>
using namespace std;

void printEvenNumber()
{
    for(int i = 2; i <= 20; i++)
    {
        if(i%2 == 0)cout << i << '\n';
    }
}
int main(){
    cout << "start function\n";
    printEvenNumber();
    cout << "End function\n";
    return 0;
}