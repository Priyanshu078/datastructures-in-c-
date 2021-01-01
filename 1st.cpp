#include<iostream>
using namespace std;

int main()
{
    char character = 'a';
    int a = 4;
    float b = 4.5;
    bool c = 1;
    // unsigned int ui;
    // signed int si;
    short int si;
    ong int li;
    //cout << ascii << endl;
    cout << "Hello world" << endl;
    cout<<"size of int is "<<sizeof(a)<<endl;
    cout<<"size of char is "<<sizeof(character)<<endl;
    cout<<"size of float is "<<sizeof(b)<<endl;
    cout<<"size of bool is "<<sizeof(c)<<endl;
    // cout<<"size of unsigned int is "<<sizeof(ui)<<endl;
    // cout<<"size of signed int is "<<sizeof(si)<<endl;
    cout<<"size of long int is "<<sizeof(li)<<endl;
    cout<<"size of short int is "<<sizeof(si)<<endl;
    return 0;
}