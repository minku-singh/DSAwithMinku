// Question Title : Check if the given string is Pangram or not
// Pangram String : It is a string which contains all the letters of english alphabet.

#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool pangram(string str)
{
    // make a vector to hold the 26 letters, initialzed with false
    vector <bool> alphabets(26, false); 
    int index;

    for(int i = 0; i < str.size(); i++)
    {
        // check if the letter at i belongs to the alphabet or not
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            index = str[i] - 'a';
        }

        else if(str[i] >= 'A' && str[i] <= 'Z')
        {
            index = str[i] - 'A';
        }

        else
        {
            continue;
        }
        alphabets[index] = true;
    }

    // check if all the index at marker is true or not
    for(int i = 0 ; i < 26; i++)
    {
        if(alphabets[i] == false)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string str = "The quick brown fox jumps over the lazy dog";


    bool ans = pangram(str);
    if(ans == true)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
}