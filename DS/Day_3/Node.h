#ifndef NODE_H
#define NODE_H

class Node
{
    public:
        int Data;
        Node *Next, *Prev;

        Node(int data)
        {
            Data = data;
            Next = Prev = nullptr;
        }

    protected:

    private:
};

#endif
