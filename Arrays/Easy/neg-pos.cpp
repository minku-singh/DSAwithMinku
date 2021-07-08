// Question Title : Move all negative numbers to beginning and positive to end with constant extra space

/*
Approach : Using two pointers.
left poiner points to 0th place
right pointer points to (n-1)th place

- We check the values at both pointers and do it till left <= right
    1) If the value at left is positive and value at right is negative then,
        - swap both
        - increment left
        - decrement right

    2) If both left and right pointers are negative then,
        - increment left

    3) If both left and right pointers are positive then,
        - decrement right
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
    int Arr[] = {-1,3,-4,0,1,45};
    int n = sizeof(Arr) / sizeof(Arr[0]);

    int left = 0;
    int right = n-1;

    while(left <= right)
    {
        if(Arr[left] >= 0 && Arr[right] <= 0)
        {
            swap(Arr[left], Arr[right]);
            left++;
            right--;
        }

        else if(Arr[left] < 0 && Arr[right] < 0)
        {
            left++;
        }

        else 
        {
            right--;
        }
    }

    printArr(Arr, n);
}