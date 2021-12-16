//a class ArrayADTList sets an arraylist with size 100 and its functions

#ifndef UNSORTED_LISTS_ARRAYADTLIST_H
#define UNSORTED_LISTS_ARRAYADTLIST_H

template <class DataType>
class ArrayADTList {

public:
    int GetLength();
    bool PutItem(const DataType &item);
    bool GetItem(const DataType &item, DataType &found_item);
    bool isFull();
    void makeEmpty();
    bool DeleteItem(const int &item);
    bool GetNextIem(DataType &item);
    void ResetList();

private:
    // feel free to change these property names if you want
    static const long MAX_SIZE = 100;
    DataType items[MAX_SIZE];
    long length = 0;
    long cursor =-1;
};


#endif //UNSORTED_LISTS_ARRAYADTLIST_H
