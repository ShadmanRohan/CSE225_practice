#include "MinMax.h"

template <class ItemType>
MinMax<ItemType>::MinMax()
{
    MaxElement = -1;
    MinElement = -1;
};


template <class ItemType>
MinMax<ItemType>::~MinMax()
{
    MaxElement = -1;
    MinElement = -1;
};

template <class ItemType>
void MinMax<ItemType>::initializeMinMax(ItemType* a, int s)
{
    MaxElement = a[0];
    MinElement = a[0];
    for(int i = 0; i < s; i++)
    {
        if(a[i]<MinElement)
        {
            MinElement = a[i];
        }
        if(a[i]>MaxElement)
        {
            MaxElement = a[i];
        }
    }
};


template <class ItemType>
ItemType MinMax<ItemType>::getMax()
{
    return MaxElement;
}

template <class ItemType>
ItemType MinMax<ItemType>::getMin()
{
    return MinElement;
}
