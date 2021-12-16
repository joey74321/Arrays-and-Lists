//Understanding how unsorted list works by manipulating the list throughout the functions
#include <iostream>
#include "LinkedADTList.h"


//it returns the length of the list
template<class DataType>
int LinkedADTList<DataType>::GetLength() {
    Node<DataType> *tempPtr = start;
    int num;
    for(num = 0; tempPtr != NULL; num++)
    {
        tempPtr = tempPtr -> next;
    }
    return num;

}

//Value from item is inserted onto the list. It will return true if it passes through and false otherwise
template<class DataType>
bool LinkedADTList<DataType>::PutItem(const DataType &item) {
    // Hint: where can you put the new node so that you don't have to traverse the list?
    Node<DataType> *tempPtr;
    tempPtr = new Node<DataType>;
    while(!isFull())
    {
        tempPtr -> value = item;
        tempPtr -> next = start;
        start = tempPtr;
        cursor = start;
        length++;
        return true;
    }
    return false;

}

//Begins to locate(tempPtr) the item in the list and will set the value to found_itemReturns
// It will return true if the item is in the list and false otherwise
template<class DataType>
bool LinkedADTList<DataType>::GetItem(const DataType &item, DataType &found_item) {
    // Hint: Watch out that you don't crate an infinite loop.

    Node<DataType>* tempPtr = start;
    int i = 0;
    while (tempPtr != NULL)
    {
        if (tempPtr -> value == item) {
            found_item = item;
            return true;
        }
        tempPtr = tempPtr -> next;
        i++;
    }
    return false;

}

//It will return true if the list is full, and false otherwise
template<class DataType>
bool LinkedADTList<DataType>::isFull() {
    // Hint: There is a point at which the computer will run out of memory
    // but for our implementation it is safe to act as if memory is infinite.

    Node<DataType>* tempPtr;
    tempPtr = new Node<DataType>;
    try
    {
        delete tempPtr;
        return false;
    } catch (std::bad_alloc)
    {
        return true;
    }

}

// Sets the list to empty. Also resets the start and cursor .
template<class DataType>
void LinkedADTList<DataType>::makeEmpty() {
    // Hint: You can't just set the length to 0, you need to worry about memory leaks.
       Node<DataType>* tempPtr;
       while (start !=  NULL)
       {
           tempPtr = start;
           start = start -> next;
           delete tempPtr;
       }
       length =0;
}

//It removes the item from the list. It will return true if the item in the list and false otherwise.
template<class DataType>
bool LinkedADTList<DataType>::DeleteItem(const int &item) {
    // Hint: find the item first then work on deleting it

    Node<DataType>* tempPtr = NULL;
    Node<DataType>* ptr = start;
    while(ptr != nullptr)
    {
        if (ptr -> value == item){
            break;
        }
        else{
            tempPtr = ptr;
            ptr = ptr -> next;
        }
    }
    if(ptr == nullptr){
        return false;
    } else {
        tempPtr -> next = ptr -> next;
        delete ptr;
        return true;
    }
}

//item is set to value in the list. It will returns true if there is an item and false otherwise
template<class DataType>
bool LinkedADTList<DataType>::GetNextIem(DataType &item) {
    // Hint: Think about what it should do if the list is empty
    if (cursor != NULL) {

        item = cursor -> value;
        cursor = cursor -> next;
        return true;
    }
    return false;
}

//it will restart the counter for GetNextItem to the front of the list.

template<class DataType>
void LinkedADTList<DataType>::ResetList() {
    cursor = start;
}

// This is the destructor, it will run when the object is removed from memory
// I've included it here because we've not gone over them in class yet.
// This one deletes all the nodes in the list, if you change the names
// of the object properties make sure you update this code.

template<class DataType>
LinkedADTList<DataType>::~LinkedADTList() {
    Node<DataType>* temp;
    while(start != nullptr) {
        temp = start;
        start = temp->next;
        delete temp;
    }
}

