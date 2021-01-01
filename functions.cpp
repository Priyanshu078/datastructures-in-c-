#include <bits/stdc++.h>
#include <math.h>
using namespace std;
// int factorial(int n)
//     {
//         int factorial = 1;
//         for (int i = n; i > 1; i--)
//         {
//             factorial = factorial * i;
//         }
//         cout << factorial << endl;
//         return factorial;
//     }
// int main()
// {
//     factorial(5);

// bool prime(int a, int b)
// {
//     int flag = 0;
//     for (int i = a; i <= b; i++)
//     {
//         for (int j = 2; j <= sqrt(i); j++)
//         {
//             if (i % j == 0)
//             {
//                 //flag = 1;
//                 cout << "non prime" << "  " << i << endl;
//                 //return false;
//             }
//             else if (i%j != 0)
//             {
//                 cout << "prime" << "  " << i << endl;
//                 //return true;
//             }
//             // else
//             // {
//             //     flag = 0;
//             //     break;
//             // }
//         }

//     }
// }
// int main()
// {
//     int a, b;
//     cin >> a >> b;
//     prime(a, b);

// bool isprime(int num)
// {
//     // int flag = 0;
//     for (int i = 2; i <= sqrt(num); i++)
//     {
//         if (num % i == 0)
//         {
//             // flag = 1;
//             return false;
//         }
//     }
//     return true;
// }
// int main()
// {
//     int n1, n2;
//     cin >> n1 >> n2;

//     for (int i = n1; i <= n2; i++)
//     {
//         if (isprime(i))
//         {
//             cout << i << endl;
//         }
//     }

//sum of first n numbers

// int sum(int n)
// {
//     int ans = 0;
//     for (int i = 1; i <= n; i++)
//     {
//         ans += i;
//     }
//     return ans;
// }
// int main()
// {
//     int n;
//     cin>>n;
//     cout<< sum(n) <<endl;
//     return 0;
// }

// check if it is a pythagorean triplet or not

// string check(int x, int y, int z)
// {
//     int a = max(x, max(y, z));
//     int b, c;

//     if (a == x)
//     {
//         b = y;
//         c = z;
//     }
//     else if (a == y)
//     {
//         b = x;
//         c = z;
//     }
//     else
//     {
//         c = y;
//         b = x;
//     }

//     if (a * a == (b * b + c * c))
//     {
//         return "It is a pythagorean triplet";
//     }
//     else
//     {
//         return "It is not a pythagorean triplet";
//     }
// }
// int main()
// {
//     int n1, n2, n3;
//     cin >> n1 >> n2 >> n3;
//     cout << check(n1, n2, n3) << endl;
//     return 0;
// }

// binary to decimal conversion

// int binaryTodecimal(int n)
// {
//     int decimal = 0;
//     int x = 1;
//     while (n>0)
//     {
//         int y = n%10;
//         decimal += x*y;
//         x *= 2;
//         n /= 10;
//     }
//     return decimal;
// }
// int main()
// {
//     int n;
//     cin>>n;
//     cout<< binaryTodecimal(n) << endl;
//     return 0;
// }

// octal to decimal

// int octalTodecimal(int n)
// {
//     int octal = 0;
//     int x = 1;
//     while(n>0)
//     {
//         int y = n%10;
//         octal += x*y;
//         x *= 8;
//         n /= 10;
//     }
//     return octal;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     cout << octalTodecimal(n) << endl;
//     return 0;
// }

// hexadeciml to decimal

// int hexaTodecimal(string n)
// {
//     int hexa = 0;
//     int x = 1;
//     int s = n.size();
//     for (int i = s-1; i >= 0; i--)
//     {
//         if(n[i] >= '1' && n[i] <= '9')
//         {
//             hexa += x*(n[i] - '0');
//         }
//         else if(n[i] >= 'A' && n[i] <= 'F')
//         {
//             hexa += x*(n[i] - 'A' + 10);
//         }
//         x *= 16;
//     }
//     return hexa;
// }
// int main()
// {
//     string n;
//     cin>>n;
//     cout << hexaTodecimal(n) << endl;
//     return 0;
// }

// decimal to binary

// int decimalTobinary(int n)
// {
//     int remainder = 0;
//     int i = 1;
//     int binary = 0;
//     while (n > 0)
//     {
//         remainder = n % 2;
//         n /= 2;
//         binary += remainder * i;
//         i *= 10;
//     }
//     return binary;
// }
// int main()f
// {
//     int n;
//     cin >> n;
//     cout << decimalTobinary(n);
//     return 0;
// }

// decimal to octal

// int decimalTOoctal(int n)
// {
//     int octal = 0;
//     int i = 1;
//     int remainder = 0;
//     while(n>0)
//     {
//         remainder = n%8;
//         octal += remainder*i;
//         i *= 10;
//         n=n/8;
//     }
//     return octal;
// }
// int main()
// {
//     int n;
//     cin>>n;
//     cout << decimalTOoctal(n);
//     return 0;
// }

// decimal to hexadecimal
// int decimalTOhexa(int n)
// {
//     int decimal = 0;
//     int i = 1;
//     int remainder = 0;
//     while (n > 0)
//     {
//         remainder = n % 16;
//         if (remainder < 10)
//         {
//             decimal += remainder * i;
//         }
//         else
//         {
//             decimal = remainder + 48;
//         }
//         i *= 10;
//         n = n / 16;
//     }
//     return decimal;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     cout << decimalTOhexa(n);
//     return 0;
// }

// adding two binary numbers
int reverse(int n)
{
    int reverse = 0;
    // int i = 1;
    int lastdigit = 0;
    while (n>0)
    {
        lastdigit = n%10;
        reverse = reverse*10 + lastdigit;
        n = n/10;
    }
    return reverse;
}
int addBinary(int a, int b)
{
    int ans = 0;
    int prevCarry = 0;

    while (a > 0 && b > 0)
    {
        if (a % 2 == 0 && b % 2 == 0)
        {
            ans = ans * 10 + prevCarry;
            prevCarry = 0;
        }
        else if ((a % 2 == 0 && b % 2 == 1) || (b % 2 == 0 && a % 2 == 1))
        {
            if (prevCarry == 1)
            {
                ans = ans * 10 + 0;
                prevCarry = 1;
            }
            else
            {
                ans = ans * 10 + 1;
                prevCarry = 0;
            }
        }
        else
        {
            ans = ans * 10 + prevCarry;
            prevCarry = 1;
        }
        a /= 10;
        b /= 10;
    }
    while (a > 0)
    {
        if (prevCarry == 1)
        {
            if (a % 2 == 1)
            {
                ans = ans * 10 + 0;
                prevCarry = 1;
            }
            else
            {
                ans = ans * 10 + 1;
                prevCarry = 0;
            }
        }
        else
        {
            ans = ans * 10 + (a % 2);
        }
        a /= 10;
    }

    while (b > 0)
    {
        // if(b%2 == 1)
        // {
        //     if (prevCarry == 1)
        //     {
        //         ans = ans*10 + 0;
        //         prevCarry = 1;
        //     }
        //     else
        //     {
        //         ans = ans*10 + 1;
        //         prevCarry = 0;
        //     }
        // }
        // else
        // {
        //     if(prevCarry == 1)
        //     {
        //         ans = ans*10 + 1;
        //         prevCarry = 0;
        //     }
        //     else
        //     {
        //         ans = ans*10 + 0;
        //         prevCarry = 0;
        //     }

        // }
        if (prevCarry == 1)
        {
            if (b % 2 == 1)
            {
                ans = ans * 10 + 0;
                prevCarry = 1;
            }
            else
            {
                ans = ans * 10 + 1;
                prevCarry = 0;
            }
        }
        else
        {
            ans = ans * 10 + (b % 2);
        }
        b /= 10;
    }
    if (prevCarry == 1)
    {
        ans = ans * 10 + 1;
    }
    ans = reverse(ans);
    return ans;
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << addBinary(a, b) << endl;
    return 0;
}
