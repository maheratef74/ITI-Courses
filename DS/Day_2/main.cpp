#include <iostream>
#include "stack.h"
#include "stackUsingLinkedlist.h"
#include "QueueUsingLikedlist.h"
#include "QueueWithArray.h"
#include "CircularQueue.h"
using namespace std;

int main()
{
    stackUsingLinkedlist stack;

    stack.Push(10);
    stack.Push(20); 
    stack.Push(30);
    stack.Push(40);
    stack.Push(50);
    cout <<"stackUsingLinkedlist\n";
    int top;
    stack.Top(top);
    cout << "top: " << top << '\n';

    int value;
    stack.Pop(value);
    cout << "value: " << value << '\n';
    
  
    QueueUsingLinkedlist q;
    int x;
    cout << "QueueUsingLinkedlist\n";
    q.Enqueue(10);
    q.Enqueue(20);
    q.Enqueue(30);

    q.Dequeue(x); 
    cout << x << '\n';

    q.Dequeue(x); 
    cout << x << '\n';



    QueueWithArray qArray(5);
    cout << "QueueWithArray\n";
    qArray.Enqueue(10);
    qArray.Enqueue(20);
    qArray.Enqueue(30);

    qArray.Dequeue(x); 
    cout << x << '\n';

    qArray.Dequeue(x); 
    cout << x << '\n';



    CircularQueue qC(5);
    cout << "CircularQueue\n";
    qC.Enqueue(10);
    qC.Enqueue(20);
    qC.Enqueue(30);
    qC.Enqueue(40);

    qC.Dequeue(x); 
    cout << x << '\n';

    qC.Dequeue(x); 
    cout << x << '\n';

    qC.Enqueue(50);
    qC.Enqueue(60);  // will shift and add 60
   
    qC.Dequeue(x); 
    cout << x << '\n';

    qC.Dequeue(x); 
    cout << x << '\n';

    qC.Dequeue(x); 
    cout << x << '\n';

    qC.Dequeue(x); 
    cout << x << '\n';

    return 0;
}
