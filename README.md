# Arrays-and-Lists

In this assignment you'll be creating both ADT Array list and the ADT Linked list.  I highly recommend you do the array version first as it is much easier.  Feel free to use the book and/or internet resources to understand the steps for each method but write your own code.  While I've used the same method names as the book I've intensionally changed the prototypes from the book so that you can't just copy it line for line.  You'll need to read it, interoperate it and modify it.
This assignment also uses templates rather than the generic object like the book.  For now your lists need only to work with number type variables, we'll expand this later.

For both List Classes the prototypes and stub methods are there for you, you need to implement the logic to make them work.  Do not change the prototypes in any way .  You may add other methods as you like and I recommend you think about adding a "find" method as you can using it in at least two other methods.
The next assignment will be on Sorted List and will build on this one so be sure you take the time to really understand what you're doing in this assignment.

Both lists have the exact same interface the prototype methods are:
    
***int GetLength();*** Returns the length of the list.

***bool PutItem(const DataType &item);*** Inserts the value of the item into the list. Return true if it succeeds and false if it fails

***bool GetItem(const DataType &item, DataType &found_item);*** Finds the item in the list and assigns the value to the found_item. Returns true if the item is in the list and false if it is not.

***bool isFull();*** Returns true if the list is full, false if it is not.

***void makeEmpty();*** Sets the list to empty.

***bool DeleteItem(const int &item);*** Removes the item from the list.Returns true if the item was in the list and false if it was not.

***bool GetNextIem(DataType &item);*** Progressively set item to values in the listReturns true if there was an item to return and false if there was not.
***void ResetList();*** Resets the counter for GetNextItem to the beginning of the list.

### ADT Array List
This list should have a max size of 100

### ADT Linked List
* Watch out for infinite loops.
* It's easy to create a memory leak   Be sure that for every 'new' in your code you have 'delete' where that node is deleted.
* Order matters! When you are looping over the linked list and/or deleting an item out of the linked list think about the order in which you do each step so that you are not setting the pointers incorrectly or trying to access memory you've already deleted.

