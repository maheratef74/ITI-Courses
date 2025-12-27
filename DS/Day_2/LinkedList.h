#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>
#include "Node.h"

using namespace std;

class LinkedList
{
    Node *head, *tail;

    public:
        LinkedList()
        {
            head = tail = NULL;
        }

        void Add(int data)
        {
            Node *node = new Node(data);

            if(head == NULL) 
            {
                head = tail = node;
            }
            else
            {
                node->Prev = tail;
                tail->Next = node;
                tail = node;
            }
        }

        bool IsEmpty()
        {
            return head == NULL;
        }

        bool RemoveLast(int &data)
        {
            if (tail == NULL)
                return false;

            data = tail->Data;

            if (head == tail)   // one node
            {
                delete tail;
                head = tail = NULL;
            }
            else
            {
                tail = tail->Prev;
                tail->Next = NULL;
            }

            return true;
        }
        
        bool Top(int &data)
        {
            if (tail == NULL)
                return false;

            data = tail->Data;
            return true;
        }

        bool RemoveFirst(int &data)
        {
            if (head == NULL)
                return false;

            data = head->Data;

            if (head == tail) // one node
            {
                delete head;
                head = tail = NULL;
            }
            else
            {
                head = head->Next;
                head->Prev = NULL;
            }

            return true;
        }

        bool PeekFirst(int &data)
        {
            if (head == NULL)
                return false;

            data = head->Data;
            return true;
        }

    protected:

    private:

        Node* GetNodeByData(int data)
        {
            Node *current = head;

            while(current != NULL)
            {
                if(current->Data == data)
                {
                    return current;
                }

                current = current->Next;
            }

            return NULL;
        }
};

#endif

