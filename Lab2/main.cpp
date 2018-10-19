#include <iostream>
#include "dynamicarray.cpp"

using namespace std;

int main()
{
    int size = 6;

    Dynamicarray<int> d(size);

    for(int i = 0, value = 10; i < size; i++, value+=value ){
            d.insertItem(i, value);

    }

    int temp;
    for(int i = 0; i < size; i++){
        temp = d.getItem(i);
        cout<<temp<<endl;
    }


    char tempc = 'A';
    Dynamicarray<char> c(size);
    for(int i = 0; i < size; i++, tempc++)
    {
        c.insertItem(i, tempc);
    }

    char tempcv;
    for(int i = 0; i < size; i++)
    {
        tempcv = c.getItem(i);
        cout<<tempcv<<endl;
    }


    return 0;
}
