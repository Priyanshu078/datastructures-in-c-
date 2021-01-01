#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
// int main()
// {
//     string word,ans,ans1;
//     getline(cin, word);
//     for (int i = 0; i < word.length(); i++)
//     {
//         if (word[i] == ' ')
//         {
//             ans += word[i];
//         }
//         else{
//             ans += word[i] - 32;  // make all the alphabets capital
//         }

//         // if (word[i] == ' ')
//         // {
//         //     ans1 += word[i];
//         // }
//         // else{
//         //     ans1 += word[i] + 32; // make all the alphabets small
//         // }
//     }
//     cout<<ans<<endl;
//     // cout<<ans1<<endl;
//     return 0;
// }

// int main()
// {
//     string str = "soifgjsdflasflal"; // tranform function to make the string to lower or upper case
//     transform(str.begin(), str.end(), str.begin(), ::toupper);
//     // str.begin and str.end to enter the full string 
//     // and str.begin() to say that we have to make the string capital from the beginning
//     // ::toupper to make the string uppercase
//     cout<< str<<endl;

//     transform(str.begin(), str.end(), str.begin(), ::tolower);
//     // ::tolower to make the string lowercase
//     cout<<str<<endl;
//     return 0;
// }


// to find the biggest number from the given numerical string 

// int main()
// {
//     string str = "8748734";
//     sort(str.begin(), str.end(), greater<int>());
//     cout<<str<<endl;
//     return 0;
// }

//which character repeated maximum numbers of times 

int main()
{
    string str;
    getline(cin, str);
    int num = 0;
    int max = 0;
    int arr[str.length()];
    for (int i = 0; i < str.length(); i++)
    {
        num = 0;
        for (int j = i; j < str.length(); j++)
        {
            if (str[i] == str[j])
            {
                cout<<str[j];
                num += 1;
            }
        }
        if (max < num)
            {
                max = num;
                cout<<" "<<max<<endl;  
            }     
    }
    return 0;     
}

