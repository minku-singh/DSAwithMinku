// QUESTION TITLE : Find frequency of given element in an Array

/* Approach 1 : To go through the whole array linearly, and increase the count whenever the array is found
#include <iostream>
using namespace std;

int main()
{
    int Arr[] = {1,2,3,2,4,2,2,6,2};
    int n = sizeof(Arr)/sizeof(Arr[0]);
    int k = 2;

    int count = 0;
    for(int i = 0; i < n; i++)
    {
        if(Arr[i] == k)
        {
            count ++;
        }
    }
    cout << count;
}
*/

/* Approach 2 : Using unordered map which is implemented using hash table 
- unordered_map consists key : value pair
- Here, key will be the elements of array and their respective values will be their frequency
*/
#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    int Arr[] = {1,22,3,22,4,22,22, 1, 22};
    int n = sizeof(Arr)/sizeof(Arr[0]);
    int k = 22;

    unordered_map <int, int> m;

    for(int i = 0; i < n; i++)
    {
        // Because we've used the elements of array as key(index), so at each key we'll increment frequency
        m[Arr[i]] ++; // This means, jo bhi value(frequency) humne Arr[i] key pe store kiya hai usko increment karo.
    }

    // we'll simply output the value at key (k)
    cout << m[k];

}