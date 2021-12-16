//Giving values to return from the functions
#include "ArrayADTList.h"



//Returns the length of the array
template <class Datatype>
int ArrayADTList<Datatype>::GetLength() {
    return length;
}

//Inserts the value into the array where it returns true when successful
//and false when it fails
template<class DataType>
bool ArrayADTList<DataType>::PutItem(const DataType &item) {
   if(!isFull())
   {
       items[length] = item;
       length++;
       return true;
   }
    return false;
}

//Finds the item of the array where its value is assigned to found_item.
//It will return true if its in the array and false if it isn't
template<class DataType>
bool ArrayADTList<DataType>::GetItem(const DataType &item, DataType &found_item) {
    for (int i = 0; i < length; ++i) {
        if (items[i] == item) {
            found_item = items[i];
            length++;
            return true;
        }
    }
    return false;
}

//when the array is full, it will return true
template<class DataType>
bool ArrayADTList<DataType>::isFull() {
    return (length == MAX_SIZE);

}

//it will set the list empty
template<class DataType>
void ArrayADTList<DataType>::makeEmpty() {
    length = 0;
}

//it removes the item from the array. Where it will return true if its in
//the array and false otherwise
template<class DataType>
bool ArrayADTList<DataType>::DeleteItem(const int &item) {
    // Hint: you only need to move one item.
    int i = 0;
    while (i != length) {
        if (items[i] == item) {
            items[i] = items[length - 1];
            length--;
            return true;
        }
        i++;
    }
    return false;
}

//resets the array
template<class DataType>
void ArrayADTList<DataType>::ResetList() {
    cursor = -1;

}

//returns true if theres a value to return,and false if otherwise
template<class DataType>
bool ArrayADTList<DataType>::GetNextIem(DataType &item) {
        cursor++;
        if (cursor != length){
            item = items[cursor];
            return true;
        }
    return false;
}
