#include "dynamicarray.h"

Dynamicarray::Dynamicarray(int size)
{
    data = new int[size];
}

Dynamicarray::~Dynamicarray()
{
    delete[] data;
}

int Dynamicarray::getItem(int index)
{
    return data[index];
};

void Dynamicarray::insertItem(int index, int value)
{
    data[index] = value;

};
