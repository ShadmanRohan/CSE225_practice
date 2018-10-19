#ifndef DYNAMICARRAY_H_INCLUDED
#define DYNAMICARRAY_H_INCLUDED

template <class ItemType>
class Dynamicarray
{
private:
    ItemType* data;
public:
    Dynamicarray(int);
    ~Dynamicarray();
    ItemType getItem(int);
    void insertItem(int, ItemType);
};

#endif // DYNAMICARRAY_H_INCLUDED
