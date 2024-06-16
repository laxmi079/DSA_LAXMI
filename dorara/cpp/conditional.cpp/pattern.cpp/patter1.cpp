#include<iostream>
using namespace std;
int main()
{
   /* int n;
    cout<<"enter a number:";
    cin>>n;
   /* int product;
    product =1;


    for (int i=1;i<=n;i++)
    {
        product=product*i;

    }
    cout<<product;*/
    
/*bool flag=true;
for(int i=2;i<=n-1;i++)
{
    if(n%i==0){
    flag=false;
    break;
}

}
if (n==1)
cout<<"1 is neither prime nor composite";
else if (flag==true) cout<<n<<"is prime";
else cout<<n<<"is comosite";
}*/

/*int count=0;
int a=n;
while(n>0)
{
    n/=10;
    count++;
}
if(a==0)
cout<<1;
else cout<<count;
}*/

/*int lastdigit=0;
int sum=0;
while(n>0)
{
lastdigit=n%10;
sum+=lastdigit;
n/=10;
}
cout<<sum;
}*/


int a;
cout<<"enter base:";
cin>>a;
int b;
cout<<"enter exponent:";
cin>>b;
float power=1;
bool flag=true;
if (b<0)
flag=false;
{b=-b;}
for(int i=1;i<=b;i++)
{
    power=power*a;
}
if(flag==false)
{
    power=1/power;
    
}
 cout<<power;
}