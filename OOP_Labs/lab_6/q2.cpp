#include<iostream>
using namespace std;

void multip_by_10(int array[] , int size)
{
    for(int i = 0; i < size; i++) *(array+i) *= 10;
}
int main(){
    int array[5];
    cout << "Enter the array elements: ";
    for(int i = 0; i < 5; i++) cin >> array[i];
    
    multip_by_10(array , 5);

    cout << "After multiple by 10: ";
    for(int i = 0; i < 5; i++)  cout << *(array+i) << ' ';
    
    return 0;
}