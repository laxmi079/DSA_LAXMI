#include<iostream>
#include<vector>
using namespace std;


void display(vector<int>&a)
{
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void reversepart(int i, int j,vector<int>&a)
{
  while(i<=j)
  {
    int temp =a[i];
    a[i]=a[j];
    a[j]=temp;
    i++;
    j--;
  }
  return;
}
int main()
{
   vector<int>v1;
   for(int i=0;i<8;i++)
   {
    int q;
    cin>>q;
    v1.push_back(q);
   }
   display(v1);
   reversepart(0,4,v1);
   display(v1);
   /*int i=0;
   int j=v1.size()-1;
 while(i<=j)
   {
    int temp=v1[i];
    v1[i]=v1[j];
    v1[j]=temp;
    i++;
    j--;
   }*/
   /*for(int i=0,j=v1.size()-1;i<=j;i++,j--)
   {
    int temp=v1[i];
    v1[i]=v1[j];
    v1[j]=temp;
   }
   display(v1);*/
}
   