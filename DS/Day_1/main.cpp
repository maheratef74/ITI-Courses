#include <iostream>
#include "Linkedlist.h"

using namespace std;

int main()
{
    LinkedList myList;

    myList.Add(3);
    myList.Add(5);
    myList.Add(7);
    myList.Add(9);
    myList.Add(11);

    myList.Display();

    int number = myList.GetDataByIndex(2);
    cout << "Data at index :" << 2 << " is " << number << '\n';

    myList.InsertAfter(74,9);
    myList.Display();

    LinkedList* l = myList.Reverse();
    l->Display();

    myList.InPlaceReverse();
    myList.Display();

    LinkedList* l2 = myList.Split(74);
    l2->Display();

    myList.Display();
    return 0;
}