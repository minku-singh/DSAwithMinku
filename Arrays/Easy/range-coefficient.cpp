// QUESTION TITLE : We have to find the range and coefficient of range of the array
// Range = (Maximum Value - Minimum Value)
// Coefficient of Range = (Maximum Value - Minimum Value) / (Maximum Value + Minimum Value)

/*
Approach 1 : We can sort the array and get min(first element) and max(last element) value, and then find range and coefficient.
*/

/*
Approach 2 : We can find the min and max using min_element and max_element from <cmath> header, and then find range and coefficient.
*/

/*
Approach 3 : We can find min and max element using loop
*/

#include <iostream>
using namespace std;

int main()
{
    float Arr[] = {15, 16, 10, 9, 6, 7, 17};
    int n = sizeof(Arr)/sizeof(Arr[0]);

    float min_ele = Arr[0];
    float max_ele = Arr[0];
    for(int i = 1; i < n; i++)
    {
        min_ele = min(min_ele, Arr[i]); //imp arguments
        max_ele = max(max_ele, Arr[i]);
    }

    int range = max_ele - min_ele;
    float coeff = (max_ele - min_ele)/(max_ele + min_ele);

    cout << range << " ";
    cout << coeff;
}