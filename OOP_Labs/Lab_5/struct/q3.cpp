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
    employee e[3];
    for(int i = 0; i < 3; i++)
    {
        cout << "Enter the employee name: " ; 
        cin >> e[i].name;
        cout << "\nEnter the employee salary: ";
        cin >> e[i].salary;
        cout << "\nEnter the employee age: ";
        cin >> e[i].age;
        cout << "\n======================================================================\n";
    }
   

    cout << "The employees informations is: \n";
    for(int i = 0; i < 3; i++)
    {
        cout << "Employee number " << i << '\n';
        cout << "name: " << e[i].name << "\nsalary: " << e[i].salary << "\nage: " << e[i].age <<'\n';
        cout << "\n======================================================================\n";
    }
  
    return 0; 
}