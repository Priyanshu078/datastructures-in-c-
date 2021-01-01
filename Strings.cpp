#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    string str; // 1st way to declare string

    // string str1(5, 'p'); // 2nd way to declare the string 

    // string str2 = "PriyanshuPaliwal";

    // getline(cin, str); // to get the input with spaces like, Priyanshu Palwial is a good boy.

    string s1 = "abc";
    string s2 = "abc";
    // s1.append(s2);  // appending two strings
    //1 more way of appending is s1 = s1 + s2

    // string s3 = s1 + s2; // concatenation of two strings

    // s1[2] it gives the third element of the string 
    // string has indexing from 0
    
    // string abc = "ufosnmva;owvna;o;;rnf;owirgw;oir";
    // abc.clear(); // clear() clear's full string and returns null string.

    // if (s1.compare(s2) == 0){
    //     cout<<"string is equal"<<endl;   // compare function detects if the two strings are equal   
    // }


    // if (!s1.empty())
    // {
    //     cout<<"String is not empty"<<endl; // empty() function is used to check if the string is empty or not
    // }

    str = "HelloWorld";
    // str.erase(1,4); // erase() function is used to erase characters of a string
    
    // cout<<str.find("Wor")<<endl; // find() is used to find if a substring is present or not and return the index at which it is present
    
    
    // cout<<str.insert(5, "lol")<<endl; // insert() is used to insert a string at a given index 
    
    // cout<<str.length()<<endl; // length() is used to detect the number of characters

    // cout<<str.size()<<endl; // size() is used give the size of the string

    // for (int i = 0; i < str.size(); i++)
    // {
    //     cout<<str[i]<<endl;                // length() and size() is used to iterate on the string
    // }

    // string s = str.substr(5, 5);
    // cout<<s<<endl;                  // substr() is used to find any substring from the given string 
    
    // string s1 = "786";
    // int s2 = stoi("786") + 4;   // stoi() is used to change the numeric string to integer
    // cout<<s2<<endl;
    
    // cout<< to_string(786)+"9"<<endl ;  // to_string() is a function to convert an integer to a string

    // string str1 = "zyxcba";
    // sort(str1.begin(), str1.end()); // sort() is used to sort the string
    // cout<< str1<<endl;
    // cout<<'a'+1<<endl;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i]>='a' && str[i]<='z')
        {
            str[i] -= 32;
        }
    }
    cout<<str<<endl;
    for (int i= 0;i<str.length();i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            str[i] += 32;
        }
    }
    cout<<str<<endl;
    return 0;



}