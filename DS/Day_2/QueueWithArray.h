class QueueWithArray
{
    int *items;
    int size;
    int count;

public:
    QueueWithArray(int s = 5)
    {
        size = s;
        count = 0;
        items = new int[size];
    }

    ~QueueWithArray()
    {
        delete[] items;
    }

    
    bool Enqueue(int data)
    {
        if (count == size) return false;

        items[count] = data;
        count++;
        return true;
    }

    bool Dequeue(int &data)
    {
        if (count == 0) 
            return false;

        data = items[0];

        for (int i = 0; i < count - 1; i++) items[i] = items[i + 1];
        
        count--;
        return true;
    }

    bool Peek(int &data)
    {
        if (count == 0) return false;

        data = items[0];
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