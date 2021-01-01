#include<iostream>
using namespace std;
int reverse(int n)
{
    int arr[10];
    int reverse = 0;
    // int i = 1;
    int lastdigit = 0;
    while (n>0)
    {
        lastdigit = n%10;
        reverse = reverse*10 + lastdigit;
        n = n/10;
        cout<<reverse;
    }
    //return reverse;
}
int main()
{
    int n;
    cin>>n;
    reverse(n);
    return 0; 
}