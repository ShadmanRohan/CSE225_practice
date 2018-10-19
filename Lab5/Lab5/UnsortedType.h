#ifndef UNSORTEDTYPE_H_INCLUDED
#define UNSORTEDTYPE_H_INCLUDED

#include "ItemType.h"
#include <new>

using namespace std;

struct NodeType
{
    ItemType info;
    NodeType* next;
};

class UnsortedType{
public:
    UnsortedType();
    ~UnsortedType();

    bool isFull() const;
    void makeEmpty();
    int getLength() const;

    void putItem(ItemType);
    void deleteItem(ItemType item);

    void resetList();
    ItemType getNextItem();
    void printList();
    ItemType getItem(ItemType item, bool& found);

private:
    NodeType* listData;
    int length;
    NodeType* currentPos;
};

#endif // UNSORTEDTYPE_H_INCLUDED
