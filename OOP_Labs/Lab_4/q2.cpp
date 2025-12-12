#include<iostream>
using namespace std;

void printEvenNumber(int start , int end)
{
    for(int i = start; i <= end; i++)
    {
        if(i%2 == 0)cout << i << '\n';
    }
}
int main(){
    cout << "start function\n";

    cout << "Enter start number\n";
    int start , end; cin >> start;

    cout << "Enter End Number\n";
    cin >> end;

    printEvenNumber(start , end);
    cout << "End function\n";
    return 0;
}