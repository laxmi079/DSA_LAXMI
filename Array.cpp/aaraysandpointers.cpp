#include<iostream>
using namespace std;
int main()
{
   int arr[7]={1,4,3,5,6,9,7};
    int* ptr=arr;//0x61fef0

        for (int i=0;i<=6;i++)
        {
            cout<<*ptr<<" ";
            ptr++;
        }
        ptr=arr;
}

