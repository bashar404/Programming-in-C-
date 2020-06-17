#include <iostream>
using namespace std;
int LongestWordLength(string str)
{
int longest=0,smallest=100,current_length=0;
//string str="My name is Golam";
for(int i=0; i<str.length();i++)
{
    if(str[i] != ' ')
    {
        current_length++;
    }

    else
    {
        longest=max(longest,current_length);
        smallest=min(smallest, current_length);
        current_length=0;
    }
}
cout<<smallest<<endl;
// We do max one more time to  consider last word as there  won't be any space after  last word
    return max(longest,current_length);
}

int main()
{
    string s = "ami an intern at dastoger";
    cout << LongestWordLength(s);
    return 0;
}
