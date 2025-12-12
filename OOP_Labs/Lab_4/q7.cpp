#include <iostream>
using namespace std;

void fillArray(int arr[], int size) 
{
    cout << "Enter elements:\n";

    for(int i = 0; i < size; i++) cin >> arr[i];
}

bool isOdd(int num) {
    return num % 2;
}

void printOddNumbers(int arr[], int size) 
{
    cout << "Odd numbers are: ";
    for (int i = 0; i < size; i++) 
    {
        if(isOdd(arr[i])) cout << arr[i] << " ";
    }
    cout << '\n';
}

int main() {
    cout << "Enter array size: ";
    int size; cin >> size;

    int array[size]; 

    fillArray(array, size);
    printOddNumbers(array, size);

    return 0;
}
