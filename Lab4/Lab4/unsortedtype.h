#ifndef UNSORTEDTYPE_H_INCLUDED
#define UNSORTEDTYPE_H_INCLUDED
//#include "unsortedtype.cpp"

const int MAX_ITEM = 5;

template <class ItemType>
class unsortedType
{
private:
    int length;
    int currentPosition;
    ItemType data[MAX_ITEM];

public:
    unsortedType();
    //~unsortedType();
    void makeEmpty();
    bool isFull();
    int lengthIs();
    void resetList();

    void insertItem(ItemType);
    void deleteItem(ItemType);
    void retrieveItem(ItemType&, bool&);
    void getNextItem(ItemType&);


};


#endif // UNSORTEDTYPE_H_INCLUDED

