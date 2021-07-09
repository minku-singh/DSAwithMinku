// Question Title : Given two strings, copy one string to other using recursion.

/*
Approach 1 : Iterative approach


#include <iostream>
using namespace std;

int main()
{
    char s1[] = "Hello";
    char s2[] = "Hindustan";

    int i = 0;

    for(i = 0; s1[i] != '\0' ; i++) //checking the end of c-style string - single quote is imp
    {
        s2[i] = s1[i]; 
    }
    s2[i] = '\0'; //To indicate the last of string

    cout << s2;
}
*/

// RECURSIVE APPROACH
#include <iostream>
using namespace std;

void copyStr(char s1[], char s2[], int index = 0)
{

    s2[index] = s1[index];
    if(s1[index] == '\0')
    {
        return;
    }

    else
    {
        
        copyStr(s1+1, s2+1, index++);
    }
}

int main()
{
    char s1[] = "Hello";
    char s2[] = "Worldss";

    copyStr(s1, s2);
    cout << s2;
}