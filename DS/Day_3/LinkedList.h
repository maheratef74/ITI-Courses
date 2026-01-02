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

        bool Remove(int data)
        {
            Node *node = GetNodeByData(data);
            
            if (node == NULL)
                return false;
            
            if (head == tail)
            {
                head = tail = NULL;
                return true;
            }
            
            if (node == head)
            {
                head = head->Next;
                head->Prev = NULL;
                return true;
            }
            
            if (node == tail)
            {
                tail = tail->Prev;
                tail->Next = NULL;
                return true;
            }
            
            node->Prev->Next = node->Next;
            node->Next->Prev = node->Prev;
            return true;
        }

        bool InsertAfter(Node *afterNode, Node *nodeToInsert)
        {
            if (afterNode == NULL || nodeToInsert == NULL)
                return false;
            
            if (afterNode == tail)
            {
                nodeToInsert->Prev = tail;
                nodeToInsert->Next = NULL;
                tail->Next = nodeToInsert;
                tail = nodeToInsert;
                return true;
            }
            
            nodeToInsert->Next = afterNode->Next;
            nodeToInsert->Prev = afterNode;
            afterNode->Next->Prev = nodeToInsert;
            afterNode->Next = nodeToInsert;
            return true;
        }

        void BubbleSort()
        {
            if (head == NULL || head == tail)
                return;

            bool swapped;
            do
            {
                swapped = false;
                Node* current = head;

                while (current != NULL && current->Next != NULL)
                {
                    Node* nextNode = current->Next;

                    if (current->Data > nextNode->Data)
                    {
                        Remove(current->Data);

                        InsertAfter(nextNode, current);

                        swapped = true;

                        current = nextNode;
                    }
                    else
                    {
                        current = current->Next;
                    }
                }

            } while (swapped);
        }

        void Display()
        {
            Node *current = head;
            while (current != NULL)
            {
                cout << current->Data << " <-> ";
                current = current->Next;
            }
            cout << "NULL\n";
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

