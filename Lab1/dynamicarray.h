#ifndef DYNAMICARRAY_H_INCLUDED
#define DYNAMICARRAY_H_INCLUDED

class Dynamicarray
{
private:
    int* data;
public:
    Dynamicarray(int);
    ~Dynamicarray();
    int getItem(int);
    void insertItem(int, int);

};

#endif // DYNAMICARRAY_H_INCLUDED
