#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter  a no.:";
    cin>>a;
    cout<<"enter other no.";
    cin>>b;
    char op;
    cin>>op;
    if(op=='+')
    cout<<a+b;
    if(op=='-')
    cout<<a-b;
    if(op=='*')
    cout<<a*b;
    if(op=='/')
    cout<<a/b;
    


}