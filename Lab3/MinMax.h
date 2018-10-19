#ifndef MINMAX_H_INCLUDED
#define MINMAX_H_INCLUDED

template <class ItemType>
class MinMax{
private:
    ItemType MaxElement;
    ItemType MinElement;

public:
    MinMax();
    ~MinMax();
    void initializeMinMax(ItemType*, int);
    ItemType getMax();
    ItemType getMin();
};


#endif // MINMAX_H_INCLUDED
