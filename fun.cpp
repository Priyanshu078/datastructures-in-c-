#include <iostream>
#include <math.h>
using namespace std;

// prime numbers between any two numbers

// bool isPrime(int num)
// {
//     for (int i = 2; i <= sqrt(num); i++)
//     {
//         if (num % i == 0)
//         {
//             return false;
//         }
//     }
//     return true;
// }

// int main()
// {

//     int a, b;
//     cin >> a >> b;

//     for (int i = a; i <= b; i++)
//     {
//         if (isPrime(i))
//         {
//             cout << i << endl;
//         }
//     }

//     return 0;
// }

// fibonaki series

// void fibo(int n)
// {
//     int term1, term2, nextterm;
//     term1 = 0;
//     term2 = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         cout << term1 << " ";
//         nextterm = term1 + term2;
//         term1 = term2;
//         term2 = nextterm;
//     }
//     return;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     fibo(n);
//     return 0;
// }

// factorial of a number

// int factorial(int n)
// {
//     int factorial = 1;
//     for (int i = n; i>=1 ; i--)
//     {
//         factorial = factorial*i;
//     }
//     //cout<<factorial;
//     return factorial;
// }
// int main()
// {
//     int n;
//     cin>>n;
//     int a = factorial(n);
//     cout<<a;
//     return 0;
// }

// to find nCr

// int factorial(int n)
// {
//     int factorial = 1;
//     for (int i = n; i >= 1 ; i--)
//     {
//         factorial *= i;
//     }

//     return factorial;
// }
// int main()
// {
//     int n,r;
//     cin>>n>>r;
//     int ans = factorial(n)/(factorial(r)*factorial(n-r));
//     cout<<ans;
//     return 0;
// }

// pascals triangle
//1
//1 1
//1 2 1
//1 3 3 1
//1 4 6 4 1

// int factorial(int n)
// {
//     int factorial = 1;
//     for (int i = n; i >=1 ; i--)
//     {
//         factorial *= i;
//     }

//     return factorial;
// }
// int main()
// {
//     int n;
//     cin>>n;
//     for (int i = 0; i < n ; i++)
//     {
//         for (int j = 0; j <= i; j++)
//         {
//             cout<<factorial(i)/(factorial(j)*factorial(i-j));
//             // cout<<"*";
//         }
//         cout<<endl;
//     }

//     return 0;
// }

// to find even or odd

// void evenodd(int n)
// {
//     if (n%2 == 0)
//     {
//         cout<<"even"<<endl;
//     }
//     else
//     {
//         cout<<"odd"<<endl;
//     }

// }
// int main()
// {
//     int n;
//     cin>>n;
//     evenodd(n);
//     return 0;
// }

// how to find a entered character is a alphabet

// string alphabet(char ch)
// {
//     if (ch >= 'a' || ch <= 'z' || ch >= 'A' || ch <= 'Z')
//     {
//         return "alphabet";
//     }
//     else
//     {
//         return "not a alphabet";
//     }
// }
// int main()
// {
//     char ch;
//     cin >> ch;
//     string alpha = alphabet(ch);
//     cout<<alpha<<endl;
//     return 0;
// }


// to find the maximum betw 3 numbers

// void greatest(int n1, int n2, int n3)
// {
//     if (n1>n2){
//         if (n1>n3){
//             cout<<n1;
//         }
//         else
//         {
//             cout<<n3;
//         }
        
//     }
//     else
//     {
//         if (n2>n3)
//         {
//             cout<<n2;
//         }
//         else
//         {
//             cout<<n3;
//         }        
//     }

//     return;
// }
// int main()
// {
//     int n1, n2, n3;
//     cin>>n1>>n2>>n3;
//     greatest(n1,n2,n3);
//     return 0;
// }

// swap the values in 2 variables

// void swap(int n1, int n2)
// {
//     int n3;
//     n3 = n2;
//     n2 = n1;
//     n1 = n2;
//     cout<<n3<<" "<<n2;
//     return;    
// }
// int main()
// {
//     int n1,n2;
//     cin>>n1>>n2;
//     swap(n1,n2);
//     return 0;
// }

// eligible to vote or not

string voting(int n)
{
    if(n>=18)
    {
        return "eligible to vote";
    }
    else
    {
        return "not eligible to vote";
    }
    
}
int main()
{
    int age;
    cin>>age;
    string eligible = voting(age);
    cout<<eligible<<endl;
    return 0;
}