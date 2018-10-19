#include "dynamicarray.h"

template <class ItemType>
Dynamicarray<ItemType>::Dynamicarray(int size)
{
    data = new ItemType[size];
}


template <class ItemType>
Dynamicarray<ItemType>::~Dynamicarray()
{
    delete[] data;
}

template <class ItemType>
ItemType Dynamicarray<ItemType>::getItem(int index)
{
    return data[index];
}

template <class ItemType>
void Dynamicarray<ItemType>::insertItem(int index, ItemType value)
{
    data[index] = value;
}
