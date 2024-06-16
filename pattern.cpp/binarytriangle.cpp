#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"enter no. of rows";
cin>>n;
int a=1;
for(int i=1;i<=n;i++)
{
    for(int j=1;j<=i;j++)
    {
  /*  cout<<a;
    //flipping
    if(a==1) a=0;
    else a=1;    }
    cout<<endl;*/

if((i+j)%2==0)
cout<<1;
else cout<<0;
}
cout<<endl;
}
}