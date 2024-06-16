#include<iostream>
using namespace std;
int gcd(int x, int y)
{
    /*int hcf=1;                      
    for(int i=1;i<=min(x,y);i++)
    {
        
        if(x%i==0&&y%i==0)
        {
         hcf==i;   
        }
    }*/
    int hcf=1;                    
    for(int i=min(x,y);i>=1;i--)
    {
        
        if(x%i==0&&y%i==0)
        {
         hcf==i;   
        }
    }

return hcf;
 }



int main()
{
    int x;
    cin>>x;
    int y ;
    cin>>y;
cout<<gcd(x,y);
}

