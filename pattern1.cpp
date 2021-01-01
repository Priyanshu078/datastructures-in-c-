#include <iostream>
using namespace std;
int main()
{
    // int n;
    // cin >> n;
    // int number = 1;
    // for (int i = 1; i <= n; i++)
    //     {
    //         for (int j = 1; j <= i; j++)
    //         {
    //         cout << number;
    //         number += 1;
    //         }
    //         cout<<endl;
    //     }

    // int row, col;
    // cin >> row >> col;

    // for (int i = 1; i <= row; i++)
    // {
    //     for (int j = 1; j <= col; j++)
    //     {
    //         if (j == 1 || j == 8 || i == 4)
    //         {
    //             cout << "* ";
    //       }
    //         else
    //         {
    //             cout << "  ";
    //         }
    //     }
    //     cout << endl;
    // }
    // for (int i = row; i>=1 ; i--)
    // {
    //     for (int j = 1; j<=row; j++)
    //     {
    //         if (i == 1 || j==1 || j==8)
    //         {
    //             cout<<"* ";
    //         }
    //         else
    //         {
    //             cout<<"  ";
    //         }
    //     }
    // }


    // int n;
    // cin >> n;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << "*";
    //     }
    //     int space = 2 * n - 2 * i;
    //     for (int j = 1; j <= space; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout<<endl;
    // }
    // for (int i = n; i >= 1; i--)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << "*";
    //     }
    //     int space = 2 * n - 2 * i;
    //     for (int j = 1; j <= space; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout<<endl;
    // }

    int n;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n+1-i; j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;   
    }
    return 0;
}