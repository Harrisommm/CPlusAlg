#include <iostream>
#include <string>
#include <cctype>

int main()
{
    std::string s;
    std::string reverse;
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
    reverse = "";
    int len = result.length();
    std::cout << len;
    reverse.resize(len);

    
    for (int i=0, j=len-1; i<len; i++, j--)
    {
        reverse[i] = result[j];
    }
    std::cout << reverse;

};