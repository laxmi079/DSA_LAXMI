#include<iostream>
using namespace std;
int main()
/*{
    int arr[7];
 arr[1]=4;

    cout<<arr[1];
}*/

{
    int n;
    cout<<"enter no. of students:";
    cin>>n;
    int marks[n];
    cout<<"enter marks:";
    for(int i=0;i<=n-1;i++)
    {
        cin>>marks[i];
    }
    for(int i=0;i<=n-1;i++)
    {
        if(marks[i]<35)

        cout<<i;
    }
}
