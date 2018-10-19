#ifndef ITEMTYPE_CPP
#define ITEMTYPE_CPP

#include "ItemType.h"

ItemType::ItemType()
{
    value = 0;
}

RelationType ItemType::ComparedTo(ItemType item) const
{
    if(value>item.value)
    {
        return GREATER;
    }
    else if (value==item.value)
    {
        return EQUAL;
    }
    else
    {
        return LESS;
    }
}

void ItemType::Print() const
{
    cout<<value<<" ";
}

void ItemType::Initialize(int n)
{
    value = n;
}

#endif // ITEMTYPE_CPP
