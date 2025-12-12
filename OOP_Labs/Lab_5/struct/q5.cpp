#include<iostream>
#include<map>
using namespace std;

struct employee
{
    string name;
    float salary;
    int age;
};

employee addEmployee()
{
    employee e;
    cout << "Enter the employee name: " ; 
    cin >> e.name;
    cout << "\n Enter the employee salary: ";
    cin >> e.salary;
    cout << "\n Enter the employee age: ";
    cin >> e.age;
    return e;
}

void dispalyEmployee(employee e)
{
    cout << "The employee informations is: \n";
    cout << "name: " << e.name
         << "\nsalary: " << e.salary
         << "\nage: " << e.age <<'\n';
}

int main(){
    employee e = addEmployee();
    cout << "\n================================================\n";
    dispalyEmployee(e);
    return 0; 
}