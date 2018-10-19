#ifndef UNSORTEDTYPE_CPP
#define UNSORTEDTYPE_CPP

#include "unsortedtype.h"

template <class ItemType>
unsortedType<ItemType>::unsortedType()
{
    length = 0;
    currentPosition = -1;
}


template <class ItemType>
void unsortedType<ItemType>::makeEmpty()
{
    //delete[] data;
    length = 0;
}

template <class ItemType>
bool unsortedType<ItemType>::isFull()
{
    return length==MAX_ITEM;
}

template <class ItemType>
int unsortedType<ItemType>::lengthIs()
{
    return length;
}

template <class ItemType>
void unsortedType<ItemType>::insertItem(ItemType item)
{
    data[length] = item;
    length++;
};

template <class ItemType>
void unsortedType<ItemType>::deleteItem(ItemType item)
{
    int location = 0;

    while(item!=data[location])
    {
        location++;
    }
    data[location] = data[length-1];
    length--;
}

template <class ItemType>
void unsortedType<ItemType>::retrieveItem(ItemType& item, bool& found)
{
    int location = 0;
    bool moreToSearch = location<length;
    found = false;

    while(moreToSearch && !found)
    {
        if(item == data[location])
        {
            found = true;
            item = data[location];
            return;
        }
        else
        {
            location++;
            moreToSearch = location<length;
        }
    }

}

template <class ItemType>
void unsortedType<ItemType>::resetList()
{
    currentPosition = -1;
}

template <class ItemType>
void unsortedType<ItemType>::getNextItem(ItemType& item)
{
    currentPosition++;
    item = data[currentPosition];
}


#endif // UNSORTEDTYPE_CPP
