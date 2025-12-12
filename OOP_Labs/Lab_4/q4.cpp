#include <iostream>
using namespace std;

int power(int base, int exp = 2) 
{
    int result = 1;
    for(int i = 0; i < exp; i++) 
    {
        result *= base;
    }
    return result;
}

int main() {
    cout << power(5) << endl;     
    cout << power(3, 3) << endl;  
    return 0;
}
