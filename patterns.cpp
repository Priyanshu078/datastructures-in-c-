#include <iostream>
using namespace std;
int main()
{
    int row,col;
    cin>>row>>col;

    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    // int row, col;
    // cin >> row >> col;
    // for (int i = 1; i <= row; i++)
    // {
    //     for (int j = 1; j <= col; j++)
    //     {
    //         if (i == 1 || i == row || j == 1 || j == col)
    //         {
    //             cout << "*";
    //         }
    //         else
    //         {
    //             cout << " ";
    //         }
    //     }
    //     cout << endl;
    // }

    // int n;
    // cin >> n;
    // for (int i = n; i >= 1; i--)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // int n;
    // cin>>n;

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j<=n ; j++)
    //     {
    //         if (j<=n-i)
    //         {
    //             cout<<" ";
    //         }
    //         else
    //         {
    //             cout<<"*";
    //         }
    //     }
    //     cout<<endl;
    // }

    // int n;
    // cin >> n;
    // for (int i = 0; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout<<i;
    //     }
    //     cout << endl;
    // }

    // int n;
    // cin >> n;
    // int number = 1;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << number;
    //         number += 1;
    //     }
    //     cout<<endl;
    // }
    return 0;
}