#include<iostream>
using namespace std;
int main()
{
    // int pocketmoney = 2500;
    // for (int i=1;i<30;i++)
    // {
    //     if (i%2==0)
    //     {
    //         continue;
    //     }
    //     else if(i%2==1)
    //     {
    //         pocketmoney = pocketmoney-300;
    //         cout<<i;
    //         cout<<" - Neha you can go out"<<endl;
    //         if (pocketmoney < 300)
    //         {
    //             cout<<"Your pocket money is over you can not go out now"<<endl;
    //             break;
    //         }
    //     }
    // }



    //2nd
    // for (int i = 0;i<=100;i++)
    // {
    //     if (i%3==0)
    //     {
    //         continue;
    //     }
    //     else
    //     {
    //         cout<<i<<endl;
    //     }
        
    // }

    //primenumber
    // int n;
    // cin>>n;

    // for (int i=0;i<n;i++)
    // {
    //     for (int j = 0;j<n;j++){
    //         if (i%j==0){
    //             cout<<"Non Prime";
    //         }
    //     }        
    // }
    // cout<<"Prime";  
    int n;
    cin>>n;
    int i;
    for (int i=0;i<n;i++){
        if (n%i==0){
            cout<<"non Prime";
            break;
        }
        else
        {
            cout<<"prime";
            break;
        }
        
    }
    if (i==n){
        cout<<"prime";
    }
    return 0;
}