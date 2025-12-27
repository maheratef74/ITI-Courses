#include "LinkedList.h"

class QueueUsingLinkedlist 
{
    LinkedList list;

public:
    QueueUsingLinkedlist() {}

    bool Enqueue(int data)
    {
        list.Add(data);
        return true;
    }

    bool Dequeue(int &data)
    {
        return list.RemoveFirst(data);
    }

    bool Peek(int &data)
    {
        return list.PeekFirst(data);
    }

};