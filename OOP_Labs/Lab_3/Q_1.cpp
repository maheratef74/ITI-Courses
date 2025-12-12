#include<iostream>
using namespace std;
int main(){
    cout << "Please 10 numbers\n";
    int a[10];
    int max = -1e9 , min =  1e9;
    for(int i = 0; i < 10; i++) 
    {
        cin >> a[i];
        if(a[i] > max) max = a[i];
        if(a[i] < min) min = a[i];
    }
    cout << "The max number in the array is: " << max << '\n';
    cout << "The mainmum number in the array is: " << min << '\n';
    return 0;
}