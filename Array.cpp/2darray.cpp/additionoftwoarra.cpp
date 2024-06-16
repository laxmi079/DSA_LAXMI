#include<iostream>
using namespace std;
int main()
{
    int arr[2][3]={{1,2,3},{4,5,6}};
    int brr[2][3]={{1,7,3},{4,5,9}};
    
    for(int i=0;i<2;i++){
for(int j=0;j<3;j++)
{
    cout<<arr[i][j]+brr[i][j]<<" ";
}
cout<<endl;
}
}