// QUESTION TITLE : Find the Kth smallest/ largest element from an Unsorted Array


/* Approach 1 : 
   - Sort the Array using sort() function of <algorithm> header
   - Then, return the kth element
*/

/* Approach 2 :
   - Using set from C++ STL
   - set contains ordered elements
   - advance(itr, k-1) : advance() function is declared in <iterator> header, which is used to move the itr to (k-1)th place.
*/

#include <iostream>
#include <iterator>
#include <set>
using namespace std;

int main()
{
   int Arr[] = {10,2,13,43,7};
   int n = sizeof(Arr) / sizeof(Arr[0]);
   int k = 3;

   set <int> s(Arr, Arr+n);

   set <int> :: iterator itr;

   itr = s.begin();
   advance(itr, k-1);

   cout << *itr;

}
