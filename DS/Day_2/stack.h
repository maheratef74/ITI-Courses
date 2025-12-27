#ifndef STACK_H
#define STACK_H

class Stack
{
    int *items;
    int size, top;

    public:
        Stack()
        {
            size = 5;
            top = -1;
            items = new int[5];
        }

        int Push(int data)
        {
            if(top == size -1)
            {
                return 0;
            }

            top++;
            items[top] = data;

            return 1;
        }

        int Pop(int &data)
        {
            if(top == -1)
            {
                return 0;
            }

            data = items[top];
            top--;

            return 1;
        }



    protected:

    private:
};

#endif // STACK_H
