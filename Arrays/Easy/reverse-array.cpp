// TITLE : Reverse an Array - Use Recursion

/* ITERATIVE APPROACH
#include <iostream>
#include <algorithm>
using namespace std;

void reverseArr(int Arr[], int n)
{
    for(int i = 0; i < n/2; i++)
    {
        int temp = Arr[i];
        Arr[i] = Arr[n-1-i];
        Arr[n-1-i] = temp;

        //swap(Arr[i], Arr[n-1-i]);
        // Or, either, we can use swap() function of <algorithm> header instead of these 3 lines.
        // Swap() : It swaps the value of two vars 
    }
}

void printArr(int Arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << Arr[i] << " ";
    }
}

int main()
{
    int Arr[] = {1,2,3,4,5,6,7};
    int n = sizeof(Arr)/sizeof(Arr[0]);

    reverseArr(Arr, n);
    printArr(Arr, n);
}
*/

// RECURSIVE APPROACH
#include <iostream>
#include <algorithm>
using namespace std;

void reverseArr(int Arr[], int start, int end)
{
    if(start >= end)
    {
        return;
    }

    else
    {
        swap(Arr[start], Arr[end]);

        reverseArr(Arr+1, start++, end--);
        /*OBSERVATION (Might be wrong): 
        While writing the recursive function, we need to see the parameters of the original function and then, modify the parameter of recursive function accordingly. 
        */
    }
}

void printArr(int Arr[], int end)
{
    for(int i = 0; i < end; i++)
    {
        cout << Arr[i] << " ";
    }
}

int main()
{
    int Arr[] = {1,2,3,4,5,6};
    int start = 0;
    int end = sizeof(Arr)/sizeof(Arr[0]);

    reverseArr(Arr, start, end);
    printArr(Arr, end);
}