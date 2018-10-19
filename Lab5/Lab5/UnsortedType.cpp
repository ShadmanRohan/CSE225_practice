#ifndef UNSORTEDTYPE_CPP
#define UNSORTEDTYPE_CPP

#include "UnsortedType.h"
//#include "ItemType.h


UnsortedType::UnsortedType()
{
    listData = NULL;
    length = 0;
}

UnsortedType::~UnsortedType()
{
    makeEmpty();
}

bool UnsortedType::isFull() const
{
    NodeType* location;
    try
    {
        location = new NodeType;
        delete location;
        return false;
    }
    catch(bad_alloc &exception)
    {
        return true;
    }
}

void UnsortedType::makeEmpty()
{
    NodeType* tempPtr;

    while(listData!=NULL)
    {
        tempPtr = listData;
        listData=listData->next;
        delete tempPtr;
    }
    length = 0;
}

int UnsortedType::getLength() const
{
    return length;
}

void UnsortedType::putItem(ItemType item)
{
    NodeType* location = new NodeType;
    location->info = item;
    location->next = listData;
    listData = location;
    length++;
}

void UnsortedType::deleteItem(ItemType item)
{
    NodeType* location = listData;
    NodeType* tempLocation = listData;

    if(item.ComparedTo(location->info)==EQUAL)
    {
        listData = listData->next;
        delete tempLocation;
        length--;
        return;
    }
    else
    {
        while(item.ComparedTo(location->next->info)!=EQUAL)
        {
            location = location->next;
            tempLocation = location->next;

        }
        location->next = location->next->next;
        delete tempLocation;
        length--;
    }
}


void UnsortedType::resetList()
{
    currentPos = NULL;
}

ItemType UnsortedType::getNextItem()
{
    if(currentPos == NULL){
        currentPos = listData;
        return currentPos->info;
    }
    else
    {
        currentPos = currentPos->next;
        return currentPos->info;
    }
}

/*void UnsortedType::printList()
{
    NodeType* location;
    while(location->next != NULL)
    {
        location -> info.Print();
        location = location->next;
    }
}*/

void UnsortedType::printList()
{
    resetList();
    for(int i = 0; i < length; i++)
    {
        getNextItem().Print();
        cout<<" ";
    }
}

ItemType UnsortedType::getItem(ItemType item, bool& found)
{
    NodeType *location = listData;
    found = false;
    bool moreToSearch = (location!= NULL);


    while(moreToSearch && !found)
    {
        if(item.ComparedTo(location->info) != EQUAL)
        {
            location = location->next;
            moreToSearch = (location!=NULL);
        }
        else
        {
            item = location->info;
            found = true;
        }

    }
    return item;

}


#endif // UNSORTEDTYPE_CPP








