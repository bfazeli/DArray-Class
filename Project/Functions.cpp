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
	for (size_t i = 0; i < numOfElements; ++i)
	{
		if (a[i] == 0) ++countOnes;
		if (a[i] == 1) ++countZeroes;
	}

	return countOnes > countZeroes;
}


// Definition function post4
// Your code here...