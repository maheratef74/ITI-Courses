#include<iostream>
using namespace std;
int main(){
    int n1 , n2;
    cout << "Enter the first number: ";
    cin >> n1;
    cout << "Enter the second number: ";
    cin >> n2;
    cout << "The sumation of "
         << n1 << " + " << n2 << " = " << n1+n2 << '\n';

    cout << "The differance of "
         << n1 << " - " << n2 << " = " << n1-n2 << '\n';

    cout << "The division of "
         << n1 << " / " << n2 << " = " << n1/n2 << '\n';

    cout << "The product of "
        << n1 << " * " << n2 << " = " << n1*n2 << '\n';    
    return 0;
}