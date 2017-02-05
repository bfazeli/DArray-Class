/*
	Fazeli, Bijan

	CS A200
	February 4, 2017

	Lab 1
*/

#include "DArray.h"

// Definition function emptyArray
// Your code here...
void DArray::emptyArray()
{
	delete[] a;
	a = new int[capacity];
	numOfElements = 0;
}


// Definition function more1than0
// Your code here...
bool DArray::more1than0() const
{
	int countOnes = 0, countZeroes = 0;
	for (int i = 0; i < numOfElements; ++i)
	{
		if (a[i] == 0) ++countZeroes;
		if (a[i] == 1) ++countOnes;
	}

	return countOnes > countZeroes;
}


// Definition function post4
// Your code here...
void DArray::post4(DArray &otherArray) const
{
	int last4 = -1;
	for (int i = 0; i < numOfElements; ++i)
		if (a[i] == 4) 
			last4 = i;

	if (last4 != -1)
	{
		otherArray.emptyArray();
		for (int i = ++last4; i < numOfElements; ++i)
			otherArray.addElement(a[i]);
	}
}