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
       for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
         cout<<endl;
    }
       for(int i=0;i<m;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }

    }
        for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;

}
}