#ifndef CIRCULAR_QUEUE_H
#define CIRCULAR_QUEUE_H

class CircularQueue
{
    int *items;
    int size;
    int front;
    int rear;
    int count;

public:
    CircularQueue(int s = 5)
    {
        size = s;
        items = new int[size];
        front = 0;
        rear = -1;
        count = 0;
    }

    ~CircularQueue()
    {
        delete[] items;
    }

    bool Enqueue(int data)
    {
        if (IsFull())
            return false;

        rear = (rear + 1) % size;
        items[rear] = data;
        count++;
        return true;
    }

    bool Dequeue(int &data)
    {
        if (IsEmpty())
            return false;

        data = items[front];
        front = (front + 1) % size;
        count--;
        return true;
    }

    bool Peek(int &data)
    {
        if (IsEmpty())
            return false;

        data = items[front];
        return true;
    }

    bool IsEmpty()
    {
        return count == 0;
    }

    bool IsFull()
    {
        return count == size;
    }
};

#endif
