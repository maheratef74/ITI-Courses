#include<iostream>
#include<map>
using namespace std;

struct employee
{
    string name;
    float salary;
    int age;
};

int main(){
    employee e;
    cout << "Enter the employee name: " ; 
    cin >> e.name;
    cout << "\n Enter the employee salary: ";
    cin >> e.salary;
    cout << "\n Enter the employee age: ";
    cin >> e.age;

    cout << "The employee informations is: \n";
    cout << "name: " << e.name << "\n salary: " << e.salary << "\n age: " << e.age <<'\n';
    return 0; 
}