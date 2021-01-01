#include <iostream>
using namespace std;

// selection sort

// int main()
// {
//     int n;
//     cin>>n;
//     int array[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin>>array[i];
//     }
//     for (int i = 0; i < n-1; i++)
//     {
//         for (int j = i+1; j < n; j++)
//         {
//             if(array[j] < array[i]) // take 1st element and compare it with all the elements then swap it
//             {
//                 int temp = array[i];
//                 array[i] = array[j];
//                 array[j] = temp;
//             }
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout<<array[i]<<" ";
//     }
//     return 0;
// }

// Binary search

// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int counter = 0;
//     while (counter<n-1) // because the array get sorted in n-1 iteration in bubble sort
//     {
//         for (int i = 0; i < n - counter; i++) //one element of the array get its in right palce
//         {
//             if (arr[i] > arr[i+1])
//             {
//                 int temp = arr[i];
//                 arr[i] = arr[i+1];
//                 arr[i+1] = temp;
//             }

//         }
//         counter += 1;
//     }

//     for (int i = 0; i < n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }

//     return 0;
// }

// insertion sort

// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     for (int i = 1; i < n; i++)// starting with the 2nd element in the array
//     {
//         int current = arr[i]; 
//         int j = i-1;
//         while (arr[j] > current && j>=0) /* if previous element in the array is greater 
//         than put the current in place of previous element and increment the palce of previous element.*/ 
//         {
//             arr[j+1] = arr[j];
//             j -= 1;
//         }
//         arr[j+1] = current;
//     }
//     for (int i = 0; i < n; i++)// printing the sorted array
//     {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }