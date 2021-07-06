/* QUESTION TITLE : 
    Program to find minimum and maximum element in an array
*/


// SIMPLE APPROACHES
// 1) we can do it by sorting the elements in the array and returning the first and the last element.
/* 2) Or, we could have used min_element() function defined in <algorithm> header which returns the iterator pointing to the first and last element in the range and dereferenced it*/


// RECURSIVE APPROACH
#include <iostream>
#include <algorithm>
using namespace std;

/* function used : min() 
- It returns the minimum element between two elements
NOTE : Even without including <algorithm> header in which min() is defined, I am able to run the program correctly.
*/

// Recursive function to find the minimum element
int findMin(int Arr[], int n)
{
    if(n == 0)
    {
        cout << "No elements in the Array!";
        return 0;
    }

    else if(n==1)
    {
        return Arr[0];
    }

    else
    {
        return min(Arr[0], findMin(Arr+1, n-1)); 

        /* Observation(May be wrong) : 
        1) While calling recursive function, we are decreasing n i.e (n-1) to reach to the base case, so while writing    the recursive function, we can follow this trick.
        2) As the answer of base case, we are returning Arr[0], so our argument in the recursive function should also change accordingly.
        */
    }
}

int main()
{
    int Arr[] = {10,4,2,3,6,9};
    int n = sizeof(Arr)/sizeof(Arr[0]);
    cout << findMin(Arr, n);
    return 0;
}