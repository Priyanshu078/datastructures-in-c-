#include <iostream>
using namespace std;
// int main()
// {
//     //Maximum element in the array
//     //maximum till ith element
//     int x; // no. of elements in the array
//     int n; // for loop will run till nth element
//     cin>> x >> n;
//     int arr[x];
//     int maxi = 0;
//     for (int i = 0; i < x; i++)
//     {
//         cin>>arr[i];
//     }

//     for (int i = 0; i <= x; i++)
//     {
//         maxi = max(maxi, arr[i]);
//         cout<<maxi<<endl;
//     }
//     return 0;
// }

// Sum of all elements in each subarrays of an array
// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     int sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     for (int i = 0; i < n; i++)
//     {
//         sum = 0;
//         for (int j = i; j < n; j++)
//         {
//             sum += arr[j];
//             cout << sum << endl;
//         }
//     }
//     return 0;
// }

// longest arithmatic subarray
int main()
{
    int n;
    int ans = 1;
    cin>>n;
    int arr[n];
    int a = 0;
    int diff = 0;
    int diffr[n-1];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j <= i+1; j++)
        {
            diff = arr[i+1] - arr[i];
            // diffr[0] = arr[0];
            diffr[a] = diff;
        }
        a = a+1;
        
    }
    for (int i = 0; i < n; i++)
    {
        if (diffr[i] == diffr[i+1])
        {
            ans += 1;
        }
    }
    cout<< ans<<endl;
    return 0;
}

