#include<iostream>
using namespace std;
int main(){
    cout << "Please enter 10 numbers\n";
    int a[10];
    for(int i = 0; i < 10; i++) cin >> a[i];

    cout << "Before Replace\n";
    for(int i = 0; i < 10; i++) cout << a[i] << ' ';

    for(int i = 0; i < 10; i++)
    {
        if(a[i] < 0) a[i] = 0;
    }
    
    cout << "\nAfter Replace\n";
    for(int i = 0; i < 10; i++) cout << a[i] << ' ';
    return 0;
}