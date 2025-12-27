#include "LinkedList.h"

class stackUsingLinkedlist 
{
    LinkedList list;

public:
    stackUsingLinkedlist() {}


    bool Push(int data)
    {
        list.Add(data);
        return true;
    }

    bool Pop(int &data)
    {
        return list.RemoveLast(data);
    }

    bool Top(int &data)
    {
        return list.Top(data);
    }
    
    bool IsEmpty()
    {
        return list.IsEmpty();
    }
};