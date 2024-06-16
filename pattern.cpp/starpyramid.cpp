#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"enter no. of rows";
cin>>n;
int nst=1;
int nsp=n-1;
for(int i=1;i<=n;i++)
{
for(int k=1;k<=nsp;k++){
    cout<<" ";
}
    for (int j=1;j<=nst;j++)
    {

        cout<<"*";
        nst+=2;
        
    
    }
    cout<<endl;
}
}