#include <iostream>

//#include "UnsortedType.h"
//#include "UnsortedType.cpp"
#include "UnsortedType.h"
//#include "ItemType.h"
//#include "ItemType.cpp"

using namespace std;

int main()
{

    UnsortedType l;
    ItemType i[10];
    i[0].Initialize(5);
    i[1].Initialize(7);
    i[2].Initialize(6);
    i[3].Initialize(9);

    l.putItem(i[0]);
    l.putItem(i[1]);
    l.putItem(i[2]);
    l.putItem(i[3]);
    l.printList();

    int len = l.getLength();
    cout<<endl<<"Length is "<<len<<endl;

    i[4].Initialize(1);
    l.putItem(i[4]);
    l.printList();
    cout<<endl;


    bool found;

    i[5].Initialize(4);
    i[6] = l.getItem(i[5], found);
    if(found == false)
    {
        cout<<"Item not found"<<endl;
    }
    else
    {
        cout<<"Item found"<<endl;
    }

    i[5].Initialize(5);
    i[6] = l.getItem(i[5], found);
    if(found == false)
    {
        cout<<"Item not found"<<endl;
    }
    else
    {
        cout<<"Item found"<<endl;
    }

    i[5].Initialize(9);
    i[6] = l.getItem(i[5], found);
    if(found == false)
    {
        cout<<"Item not found"<<endl;
    }
    else
    {
        cout<<"Item found"<<endl;
    }

    i[5].Initialize(10);
    i[6] = l.getItem(i[5], found);
    if(found == false)
    {
        cout<<"Item not found"<<endl;
    }
    else
    {
        cout<<"Item found"<<endl;
    }

    if(l.isFull())
    {
        cout<<"List is Full"<<endl;
    }
    else
    {
        cout<<"List is not FUll"<<endl;
    }

    l.deleteItem(i[0]);
    if(l.isFull())
    {
        cout<<"List is Full"<<endl;
    }
    else
    {
        cout<<"List is not FUll"<<endl;
    }

    l.deleteItem(i[4]);
    l.printList();
    cout<<endl;

    l.deleteItem(i[2]);
    l.printList();
    cout<<endl;




    return 0;
}

