#include <iostream>
using namespace std;

class MyList
{
private:
    int* arr;
    int size;

public:
    int currentIndex;

    MyList()  // Default Constructor
    { 
        size = 0;
        currentIndex = -1;
        arr = nullptr;
        cout << "Default Constructor called\n";
    }

    MyList(MyList& other)
    {
       // other.size = 5; // we put const to deny any one to change the other before copy it 
         cout << "Copy Constructor called\n";

        size = other.size;
        currentIndex = other.currentIndex;

        if (size > 0)
        {
            arr = new int[size];
            for (int i = 0; i < size; i++) arr[i] = other.arr[i];
        }
        else
        {
            arr = nullptr;
        }
    }

    MyList& operator=(const MyList& other)
    {
        cout << "Assignment Operator (=) called\n";

        if (this == &other)
            return *this;

        delete[] arr;

        size = other.size;
        currentIndex = other.currentIndex;

        if (size > 0)
        {
            arr = new int[size];
            for (int i = 0; i < size; i++) arr[i] = other.arr[i];
        }
        else
        {
            arr = nullptr;
        }

        return *this;
    }

    void Add(int value)
    {
        int* newArr = new int[size + 1];

        for (int i = 0; i < size; i++) newArr[i] = arr[i];

        newArr[size] = value;

        delete[] arr;

        arr = newArr;
        size++;
    }

    ~MyList()
    {
        cout << "Destructor called\n";
        delete[] arr;
    }
};


void MyFunc(MyList L1);

void MyFunc(MyList L1)
{
    L1.currentIndex = 0;
}

MyList GetList()
{
    MyList temp;  // defulte cons 
    temp.Add(10);
    temp.Add(20);

    temp.currentIndex = 1;
    return temp;
}


int main()
{
    MyList myList;  
    myList.Add(2);
    myList.Add(3);
    myList.Add(4);

    MyFunc(myList);  

    MyList L1, L2, L3; 

    MyList L4(L3);      

    MyList L5 = L3;  

    L5 = L3;  

    MyList L6 = GetList();  

    L5 = GetList();   

    return 0;
}
