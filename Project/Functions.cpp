/*
	(name header)
*/

#include "DArray.h"

// Definition function emptyArray
// Your code here...
void DArray::emptyArray()
{
	numOfElements = 0;
}


// Definition function more1than0
// Your code here...
bool DArray::more1than0()
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
void DArray::post4(DArray &otherArray)
{
	int last4 = -1;
	for (int i = 0; i < numOfElements; ++i)
	{
		if (a[i] == 4)
		{
			last4 = i;
		}
	}

	if (last4 != -1)
	{
		otherArray.emptyArray();
		for (int i = ++last4; i < numOfElements; ++i)
		{
			otherArray.addElement(a[i]);
		}
	}
}