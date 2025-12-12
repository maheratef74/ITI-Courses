#include<iostream>
using namespace std;
int main(){
    string firstName , lastName;
    cout << "Enter your first name: ";
    cin >> firstName;
    cout << "\nEnter the last name: ";
    cin >> lastName;
    string fullName = firstName + ' ' + lastName;
    cout << "The full name is " << fullName << '\n';
    return 0;
}