#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cout<<"enter no. of rows: ";
    cin>>m;
        
    cout<<"enter no. of  columns: ";
    cin>>n;
    int arr[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    int minr=0,minc=0;
    int maxr=m-1,maxc=n-1;
    while(minc<=maxc&&minr<=maxr)
    {
        for(int j=minc;j<=maxc;j++)
        {
            cout<<arr[minr][j]<<" ";
        }
        minr++;
        for(int i=minr;i<maxr;i++)
        {
            cout<<arr[i][maxc]<<" ";
        }
        maxc--;
        for(int j=maxc;j>=minc;j--)
        {
            cout<<arr[maxr][j]<<" ";
        }
maxr--;
for(int i=maxr;i>=minr;i--)
{
    cout<<arr[i][minc]<<" ";
}
minc++;
    }
}