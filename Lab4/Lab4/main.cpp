#include <iostream>
#include "unsortedtype.cpp"
#include "unsortedtype.h"

using namespace std;

int main()
{
    unsortedType<int> a;


    if(a.lengthIs()==0)
    {
        cout<<"List Empty"<<endl;
    }

    a.insertItem(23);
    a.insertItem(-57);
    a.insertItem(25);
    a.insertItem(78);

    int size = a.lengthIs();
    int temp;
    for(int i = 0; i < size; i++)
    {
        a.getNextItem(temp);
        cout<<temp<<", ";
    }
    cout<<endl;


    a.insertItem(96);
    size = a.lengthIs();
    a.resetList();
    for(int i = 0; i < size; i++)
    {
        a.getNextItem(temp);
        cout<<temp<<", ";
    }
    cout<<endl;

    cout<<"List length = "<<size<<endl;

    int n = 96;
    bool found;
    a.retrieveItem(n, found);
    if(found == true)
    {
        cout<<"Item is found : "<<n<<endl;
    }
    else
    {
        cout<<"Item not Found : "<<n<<endl;
    }
    cout<<endl;

    n = 69;
    a.retrieveItem(n, found);
    if(found == true)
    {
        cout<<"Item is found : "<<n<<endl;
    }
    else
    {
        cout<<"Item not Found : "<<n<<endl;
    }
    cout<<endl;

    a.deleteItem(25);
    size = a.lengthIs();
    a.resetList();
    for(int i = 0; i < size; i++)
    {
        a.getNextItem(temp);
        cout<<temp<<", ";
    }
    cout<<endl;

    a.makeEmpty();
    if(a.isFull()==false)
    {
        cout<<"List is not full"<<endl;
    }





    return 0;
}
