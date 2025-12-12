#include <iostream>
using namespace std;

void fillArray(int arr[], int size) 
{
    cout << "Enter elements:\n";

    for(int i = 0; i < size; i++) cin >> arr[i];
}

void printArray(int arr[], int size) 
{
    cout << "Array elements are: ";

    for(int i = 0; i < size; i++) cout << arr[i] << " ";
    
    cout << '\n';
}

int main() {
    cout << "Enter array size: ";
    int size; cin >> size;

    int array[size]; 

    fillArray(array, size);
    printArray(array, size);

    return 0;
}
