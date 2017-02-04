#ifndef DARRAY_H
#define DARRAY_H

#include <iostream>
using namespace std;

const int CAPACITY = 50;

class DArray
{
	friend ostream& operator<<(ostream& out, const DArray& theArray);
		// Overloaded insertion operator to print array

public:
	DArray();
		// Initializes array to CAPACITY.

	DArray(int newCapacity);
		// Initializes array to newCapacity.

	DArray(const DArray& otherArray); 
		// Copy constructor
	
    void addElement(int newElement);
		// Inserts newElement to the end of the array.

	int getNumOfElements() const;
		// Returns the number of elements in the array.

	DArray& DArray::operator=(const DArray&);
		// Overloaded assignment operator

	~DArray( ); 
		// Destructor

	/**********************************************************************/
	
	// Declaration function emptyArray
	// Your code here...
	void emptyArray();

	// Declaration function more1than0
	// Your code here...
	bool more1than0();

	// Declaration function post4
	// Your code here...
	void post4(DArray & otherArray);

private:
    int *a;			
    int capacity;	
    int numOfElements;		
};

#endif