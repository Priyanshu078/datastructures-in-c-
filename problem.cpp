#include<iostream>
using namespace std;
void sumofallSubarrays(int n, int arr[])
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        sum = 0;
        for (int j = i; j < n; i++)
        {
            sum = sum + arr[j];
            cout << sum <<endl; 
        }  
    } 
}
int main()
{
    int n;
    int arr[n];
    sumofallSubarrays(n, arr);
    return 0;
}