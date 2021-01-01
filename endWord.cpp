#include<iostream>
using namespace std;
int main()
{
    string ans;
    string lastword;
    string sentence;
    getline(cin, sentence);
    for(int i=sentence.length()-1;i>=0;i--)
    {
        ans = ans + sentence[i];
        if (sentence[i] == ' ')
        {
            break;
        }
        
    }
    for (int i = (ans.length()-1); i >= 0; i--)
    {
        lastword += ans[i];
    }
    cout<<lastword;
    return 0;
}