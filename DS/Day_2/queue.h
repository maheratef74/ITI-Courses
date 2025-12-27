#ifndef QUEUE_H
#define QUEUE_H


class Queue
{
    int *items;
    int size, front, rear;

    public:
        Queue()
        {
            size = 5;
            front = rear = -1;
            items = new int[size];
        }

        int EnQueue(int data)
        {
            if(rear == size - 1)
            {
                return 0;
            }

            if(front == -1)
            {
                front++;
            }

            rear++;

            items[rear] = data;

            return 1;
        }

        int DeQueue(int &data)
        {
            if(front == -1)
                return 0;

            data = items[front];
            front++;

            return 1;
        }

    protected:

    private:
};

#endif // QUEUE_H
