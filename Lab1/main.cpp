#include <iostream>
#include "dynamicarray.cpp"


using namespace std;

int main()
{
    cout<<"Enter the size of the array : "<<endl;

    int size;
    cin>>size;

    Dynamicarray d(size);
    int value;

    for(int i = 0; i < size; i++){
        cin>>value;
        d.insertItem(i,value);
    }

    cout<<"The resulting array is : "<<endl;
    for(int i = 0; i < size; i++){
        value=d.getItem(i);
        cout<<value<<" ";
    }
    return 0;


}
