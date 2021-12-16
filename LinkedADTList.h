//A linkList, where it is represented as a class and also a separate class for Node
#ifndef NODE
#define NODE
template <class DataType>
struct Node {
    DataType value;
    Node<DataType>* next;
};

#endif


#ifndef UNSORTED_LISTS_LINKEDADTLIST_H
#define UNSORTED_LISTS_LINKEDADTLIST_H

template <class DataType>
class LinkedADTList {

public:
    virtual ~LinkedADTList();

    int GetLength();
    bool PutItem(const DataType &item);
    bool GetItem(const DataType &item, DataType &found_item);
    bool isFull();
    void makeEmpty();
    bool DeleteItem(const int &item);
    bool GetNextIem(DataType &item);
    void ResetList();


private:
    Node<DataType>* start = nullptr;
    long length = 0;
    Node<DataType>* cursor = start;
};




#endif //UNSORTED_LISTS_LINKEDADTLIST_H
