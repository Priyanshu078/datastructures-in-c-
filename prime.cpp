#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int flag = 0;

    for (int i = 2; i < n; i++) //sqrt(n)
    {
        if (n % i == 0)
        {
            cout << "non prime";
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        cout << "prime";
    }

    return 0;
}