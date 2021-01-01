#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string ciphertext(string str, int key)
{
    string ans;
    if (key <= 0)
    {
        cout<<"INVALID INPUT"<<endl;
    }
    else{
        for (int i=0;i<str.length();i++)
        {
            if (str[i] == ' ')
            {
                ans += str[i];
            }
            else
            {
                ans += str[i] + key;
            }    
        }
        
    }
    return ans;
}
int main()
{
string str;
getline(cin, str);
int key;
cin>>key;
string answer = ciphertext(str, key);
cout<<answer<<endl;
}