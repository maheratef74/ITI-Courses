#include <iostream>
#include "LinkedList.h"

using namespace std;

int main()
{
    LinkedList list;

    list.Add(5);
    list.Add(1);
    list.Add(4);
    list.Add(2);
    list.Add(1);

    cout << "before sorting:\n";
    list.Display();

    list.BubbleSort();

    cout << "\nafter sorting:\n";
    list.Display();

    return 0;
}
