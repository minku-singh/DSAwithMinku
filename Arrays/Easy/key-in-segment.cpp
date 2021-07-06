// Question Title : Check if a key is present in every segment of size k in an array

/*
The Question says :  
- We have been given an array (Arr), Size of each segment (k), Key to be found (x)
- If x is found in each segment of size k, then we need to print "Yes" otherwise "No"
*/

/*
Explanation : 
arr[] = { 3, 5, 2, 4, 9, 3, 1, 7, 3, 11, 12, 3} 
x = 3 
k = 3 

Then, the Output should be : "Yes"
*/


#include <iostream>
using namespace std;

// function to check if the key is present in each segment of array
string keyPresent(int Arr[], int size_of_arr, int x, int k)
{
    int count = 0;
    for(int i = 0; i < size_of_arr; i += k)
    {
        // if key is present in the segment
        for(int j = i; j < k; j++)
        {
            if(Arr[j] == x)
            {
                // count increases by 1 if the key is found in the segment
                count++;
                break;
            }
        }
    }
    
    // here, (size_of_arr/k) means total number of segments
    // so, if count >= number of segments, then key is present in each segment
    if(count >= (size_of_arr/k))
    {
        return "Yes";
    }

    else
    {
        return "No";
    }
}

int main()
{
    int Arr[] = {21, 23, 56, 65, 34, 54, 76, 32, 23, 45, 21, 23, 25};
    int k = 5; // size of segment
    int x = 23; // element to be searched in each segment
    int size_of_arr = sizeof(Arr)/sizeof(Arr[0]);
    cout << keyPresent(Arr, size_of_arr, x, k);
}