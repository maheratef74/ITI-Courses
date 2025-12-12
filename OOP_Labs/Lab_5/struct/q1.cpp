#include<iostream>
#include<map>
using namespace std;

struct Numbers
{
    int n1, n2 ,n3;
};

int max_number(Numbers numbers)
{
    if(numbers.n1 > numbers.n2 && numbers.n1 > numbers.n2) return numbers.n1;
    else if(numbers.n2 > numbers.n1 && numbers.n2 > numbers.n3) return numbers.n2;
    else return numbers.n3;
}



int main(){
    Numbers numbers = {1,2,3};
    cout << "the max number of the three numbers is: " << max_number(numbers);
    return 0;
}