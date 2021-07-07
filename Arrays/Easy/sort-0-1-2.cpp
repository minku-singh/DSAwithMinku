// QUESTION TITLE : Sort the array which contains only 0s, 1s, 2s
// or, this question is also framed using colors.

/*
First Approach : Sort it using any sorting algorithm in O(nlogn) time.
Or, use the built-in sort() function which is of <algorithm> header.
*/

/* Second Approach : Use the famous DUTCH NATIONAL FLAG ALGORITHM
DUTCH NATIONAL FLAG ALGORITHM 

1) Take three pointers : low, mid, high
2) In beginning, the low and mid pointers will point to the first element of the array. High pointer will point to the last element of the array.
Iterate till mid <= high
    a) If Arr[mid] == 0 then, 
        - swap Arr[mid] with Arr[low] 
        - Increment both pointers i.e. low and mid
    
    b) If Arr[mid] == 1 then,
        - increment mid pointer once

    c) if Arr[mid] == 2 then,
        - swap both pointers i.e. high and mid
        - decrement high pointer once
*/

#include <iostream>
#include <algorithm>
using namespace std;

void printArr(int Arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << Arr[i] << " ";
    }
}

int main()
{
    int Arr[] = {0, 1, 2, 0, 1, 2};
    int n = sizeof(Arr)/sizeof(Arr[0]);

    // set the initial pointers - low, mid, high
    int low = 0;
    int mid = 0;
    int high = n-1;

    // iterate through the array
    while(mid <= high)
    {
        if(Arr[mid] == 0)
        {
            swap(Arr[low], Arr[mid]);
            low++;
            mid++;
        }

        else if(Arr[mid] == 1)
        {
            mid++;
        }

        else if(Arr[mid] == 2)
        {
            swap(Arr[mid], Arr[high]);
            high--;
        }
    }

    printArr(Arr, n);
}
