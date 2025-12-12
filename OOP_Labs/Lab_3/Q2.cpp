#include<iostream>
using namespace std;
int main(){
    cout << "Please 10 numbers\n";
    int a[11];
    for(int i = 0; i < 10; i++) cin >> a[i];

    cout << "Before Shifting\n";
    for(int i = 0; i < 11; i++) cout << "index " << i << " => " << a[i] << '\n';

    for(int i = 10; i >= 0; i--) a[i] = a[i-1];
    
    cout << "After Shifting\n";
    for(int i = 0; i < 11; i++) cout << "index " << i << " => " << a[i] << '\n';
    return 0;
}