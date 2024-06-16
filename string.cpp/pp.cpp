#include<bits/stdc++.h>
using namespace std;
int main()
{
  
    int n;
    int m;
    cin>>n>>m;
    int a[n][m];
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
}
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
}
cout<<endl;
int minr=0;
int maxr=n-1;
int minc=0;
int maxc=m-1;
while(minc<=maxc&&minr<=maxr)
{for(int j=minc;j<=maxc;j++)
{
  cout<<a[minr][j]<<" ";
}
minr++;

for(int i=minr;i<=maxc;i++)
{
  cout<<a[i][maxc]<<" ";
}
maxc--;

for(int j=maxc;j>=minc;j--)
{
  cout<<a[maxr][j]<<" ";
}
maxr--;

for(int i=maxr;i>=minr;i--)
{
  cout<<a[i][minc]<<" ";
}
minc++;}

}