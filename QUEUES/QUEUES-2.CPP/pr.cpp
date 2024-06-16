#include<bits/stdc++.h>
using namespace std;
void reorder(int arr[], int n) {
    int m = n / 2;
    int brr[m];
    int crr[m];

    // Copy first half of arr into brr and second half into crr
    for (int i = 0; i < m; i++) {
        brr[i] = arr[i];
        crr[i] = arr[m + i];
    }

    // Rearrange arr by placing elements from brr and crr alternately
    for (int i = 0; i < m; i++) {
        arr[i * 2] = brr[i];
        arr[i * 2 + 1] = crr[i];
    }
}


void display(int arr[],int n)
{
for(int i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}
cout<<endl;
}
int main()
{
    int arr[]={1,2,3,4,5,6};
    //1 4 2 5 3 6
    int n=sizeof(arr)/sizeof(arr[0]);
    display(arr,n);
   reorder(arr,n);
    display(arr,n);
}