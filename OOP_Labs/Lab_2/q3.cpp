#include<iostream>
using namespace std;
int main()
{
    int n1 , n2;
    char op;
    cout << "Enter the equation: ";
    cin >> n1 >> op >> n2;
    if(op != '+' or op != '-' or op != '*' or op != '/')
    {
        cout << "invaild operations\n";
        switch (op)
        {
            case '+':
               cout << n1 << " + " << n2 << " = " << n1+n2 << '\n';
               break;
            case '-':
              cout << n1 << " - " << n2 << " = " << n1-n2 << '\n';
              break;
            case '*':
              cout << n1 << " * " << n2 << " = " << n1*n2 << '\n';
              break;
           case '/':
              cout << n1 << " / " << n2 << " = " << n1/n2 << '\n';
              break;

            default:
                break;
        }
    }
    return 0;
}