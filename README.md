# DArray-Classv

Implemented the following member functions of the DArray class: 

 Function emptyArray
  o The function empties the array of the calling object (be efficient!).

 Function more1than0 
  o The function returns true if the number of 1s in the array of the calling object is greater than the number of 0s, and returns false        otherwise.
  o Assumptions: 
     The array of the calling object may contain integers other than 1 and 0.
     The array of the calling object has at least one element.
      o Example:
        Calling object array is: Parameter object array becomes:
        [1, 0, 1]   → true[1, 0, 1, 0] → false[1, 3, 1, 2, 0, 1] → true

 Function post4 
  o Parameter: An object of the class DArray
  o The function copies into the array of the parameter object all the elements from the calling object that comes after the last 4.
  o Assumptions:
     The calling object will contain at least one 4.  The array of the calling object will have at least one element.  The array of the        parameter object is empty.
      o Example:
        Calling object array is: Parameter object array becomes:
        [2, 4, 1, 2]   → [1, 2][4, 1, 4, 2] → [2][4, 4, 1, 2, 3] → [1, 2, 3]
