#include <iostream>
#include <string>
#include <cctype>

int main()
{
    std::string s;
    s = "Hey, You Here";
    
    for(int x=0; x<s.length(); x++)
    {
        s[x]=std::tolower(s[x]);
    }
    std::string result;
    for(int y=0; y<s.length(); y++)
    {
        if(std::isalpha(s[y]))
        {
            result += s[y];
        }
    }
    int len = result.length();
    
    for (int i=0, j=len-1; i<len; i++, j--)
    {
        result[i] = result[j];
    }
    std::cout << result;

};