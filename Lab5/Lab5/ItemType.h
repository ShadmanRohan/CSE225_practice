#ifndef ITEMTYPE_H
#define ITEMTYPE_H

#include <iostream>
using namespace std;

enum RelationType {LESS, GREATER, EQUAL};

class ItemType
{
private:
    int value;

public:
    ItemType();
    RelationType ComparedTo(ItemType) const;
    void Print() const;
    void Initialize(int);

};

//#include "ItemType.cpp"
#endif // ITEMTYPE_H_INCLUDED
