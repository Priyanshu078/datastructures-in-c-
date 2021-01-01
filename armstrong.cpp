#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int last_number = 0;
    int number_after_cube = 0;
    int original_number = n;
    while (n>0)
    {
        last_number = n%10;
        number_after_cube += pow(last_number,3);
        n = n/10;
        cout<<last_number<<"  "<<n<<endl;

        //cout<<n;
    }
    if (number_after_cube==original_number)
    {
        cout<<"amstrong number"<<endl;
    }
    else
    {
        cout<<"not amstrong"<<endl;
    }
    
    // cout<<original_number<<endl;
    // cout<<number_after_cube<<endl;
    return 0;
}