#include <iostream>
using namespace std;
// int main()
// {
    //printing out the elements in the array

    // string arr[4] = {"Gargi","Priyanshu","Aman","Dhruvi"};
    // for (int i = 0; i < 4; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }

    // entring the elements in the array and then printing them

    // int n;
    // cin>>n;
    // int num[n];

    // for (int i = 0; i < n; i++)
    // {
    //     cin>>num[i];
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<num[i]<<" ";
    // }

    // largest and the smallest no. in the array

    // int n;
    // cin>>n;
    // int arr[n];
    // for (int  i = 0; i < n; i++)
    // {
    //     cin>>arr[i];
    // }

    // int maxNo = INT16_MIN; // minimum number possible
    // int minNo = INT16_MAX; // maximum possible number

    // for (int i = 0; i < n; i++)
    // {
    //     // if (arr[i] < minNo)
    //     // {
    //     //     minNo = arr[i];
    //     // }
    //     // else if (arr[i] > maxNo)
    //     // {
    //     //     maxNo = arr[i];
    //     // }
    //     maxNo = max(maxNo , arr[i]);
    //     minNo = min(minNo , arr[i]);

    // }
    // cout<< "max no is "<< maxNo << " and min no. is "<< minNo;

    //Sum of the elements in the array

    // int n;
    // cin >> n;
    // int sum = 0;
    // int arr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin>> arr[i];
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     sum += arr[i];
    // }
    // cout<< "sum of the elements in the array "<< sum;
    // return 0;

// linear search

// int linearSearch(int arr[], int n, int key)
// {
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == key)
//         {
//             return i;
//         }
        
//     }
//     return -1;
// }
// int main()
// {
//     int n;
//     cin>>n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin>>arr[i];
//     }
//     int key;
//     cin>>key;
//     cout<<linearSearch(arr,n,key)<<endl;
//     return 0;
// }

// binary search

int binarysearch(int array[], int n,int key)
{
    int s = 0;
    int e = n;
    
    while (s<=e)
    {
        int mid = (s+e)/2;
        if (array[mid] == key)
        {
            return mid;
        }
        else if (array[mid] < key)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int n;
    cin>>n;
    int array[10];
    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
    }
    int key;
    cin>>key;
    cout << binarysearch(array, n , key);
    return 0;
}





