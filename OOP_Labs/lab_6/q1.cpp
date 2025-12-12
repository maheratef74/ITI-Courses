#include<iostream>
using namespace std;
void swap(int *x , int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main(){
    int a = 5 , b = 3;
    swap(&a , &b);
    cout << "After swaping: a => " << a << " b => " << b << '\n';
    return 0;
}