#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<" enter no. of rows of 1st matrix";
    cin>>n;
    int m;
    cout<<" enter no. of columns of 1st matrix";
    cin>>m;
    int p;
    cout<<" enter no. of rows of 2nd matrix";
    cin>>p;
    int q;
    cout<<" enter no. of columns of 2nd matrix";
    cin>>q;
    int a[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
           cin>>a[i][j];
        }
    }
      int b[m][n];
    for(int i=0;i<p;i++)
    {
        for(int j=0;j<q;j++)
        {
           cin>>b[i][j];
        }
    }
    int res[m][q];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<q;j++)
        
        {
            res[i][j]=0;
for(int k=0; k<p;k++)

{
    res[i][j]+=a[i][k]+b[k][j];
}
        }
    }
     int res[m][q];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<q;j++)
        
cout<<res[i][j];
    }

}