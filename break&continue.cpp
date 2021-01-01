#include<iostream>
using namespace std;
int main()
{
    int pocketmoney = 2500;
    for (int i=1;i<30;i++)
    {
        if (i%2==0)
        {
            continue;
        }
        else
        {
            cout<<"Neha you can go out"<<endl;
            if (i%2==1)
            {
                pocketmoney -= 300;
                if (pocketmoney == 0)
                {
                    cout<<"Your pocket money is over u=you can not go out now"<<endl;
                }
            }
        }
        
        

    }
}