#include<iostream>
using namespace std;
int main(){
    // pehle ye likna hai g++ filename.cpp -o filename.exe 
    // phir sir program ka name likna hai
    // and thats it ho jayega
    int a,b,c;
    cout<<"Enter the value of a";
    cin>>a;
    cout<<"Enter the value of b2";
    cin>>b;
    cout<<"Enter the value of c";
    cin>>c;
    if (a>b & a>c)
    {
        cout<<"a is the greatest"<<endl;
    }
    else if (b>a & b>c)
    {
        cout<<"b is the greatest"<<endl;
    }
    else
    {
        cout<<"c is the greatest";
    }
    

    return 0;
}