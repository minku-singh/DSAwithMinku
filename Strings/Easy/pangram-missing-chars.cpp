// Question Title : Find the missing characters to make a string Pangram

#include <iostream>
#include <vector>
#include <string>
using namespace std;

string missingChar(string str)
{
    vector <bool> alphabets(26, false);
    int index;
    string ans = "";

    for(int i = 0; i < str.length(); i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            alphabets[str[i] - 'A'] = true;
        }

        else if(str[i] >= 'a' && str[i] <= 'z')
        {
            alphabets[str[i] - 'a']=true;
        }
    }

        // iterate through the vector to check which index has "false" value and that would be the ans
    for(int i = 0; i < 26; i++)
    {
        if(alphabets[i] == false)
        {
            ans.push_back((char)('a'+i));
        }
    }
    return ans;
}

int main()
{
    string str = "The quick brown fox jumps over the dog";
    cout << missingChar(str);
}