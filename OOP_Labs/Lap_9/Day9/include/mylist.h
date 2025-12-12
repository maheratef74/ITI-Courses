#ifndef MYLIST_H
#define MYLIST_H


class MyList
{
    int *items;
    int size, currentIndex;

    public:
        MyList()
        {
            size = 5;
            items = new int[size];
            currentIndex = -1;
        }

        MyList(MyList &oldList)
        {
            this->size = oldList.size;
            this->currentIndex = oldList.currentIndex;

            this->items = new int[size];

            for(int i = 0; i < size; i++)
            {
                this->items[i] = oldList.items[i];
            }
        }

        void Add(int data)
        {
            currentIndex++;

            if(currentIndex == size)
            {
                Extend();
            }

            items[currentIndex] = data;
        }

        int GetDataByIndex(int index)
        {
            return items[index];
        }

        ~MyList()
        {
            delete items;
        }

    protected:

    private:

        void Extend()
        {
            int *temp = new int[size * 2];

            for(int i = 0; i < size; i++)
            {
                temp[i] = items[i];
            }

            size *= 2;
            delete items;

            items = temp;
        }
};

#endif // MYLIST_H
