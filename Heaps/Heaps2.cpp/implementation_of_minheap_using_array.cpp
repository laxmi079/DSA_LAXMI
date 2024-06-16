#include<bits/stdc++.h>
using namespace std;
class minheap
{
    public:
    int arr[50];
    int idx;
    minheap()
    {
        idx=1;
    }
    int top()
    {
        return arr[1];
    }
void push(int x)
{
 arr[idx]=x;
 int i=idx;
 idx++;
// swapping ith element with its parent element 
 while(i!=1)
 {
   int parent=i/2;
   if(arr[i]<arr[parent]) 
   {
    swap(arr[i],arr[parent]);
   }
   else break;
  i=parent;
 }
}
void pop()
{
    //pop
    idx--;
    arr[1]=arr[idx];
    // rearrangement
    int i=1;
    while(true)
    {
        int left=2*i , right=2*i +1;
        if(left> idx-1) break;
        if(right>idx-1)
        {
            if(arr[i]>arr[left]) 
            {
                swap(arr[i],arr[left]);
                i=left;
            }
            break;
        }
        if(arr[left] < arr[right])
        {
            if(arr[i]>arr[left])
            {
                swap(arr[i],arr[left]);
                i=left;
            }
            else break;
        }
        else
        {
            if(arr[i]>arr[right])
            {
                swap(arr[i],arr[right]) ;
                i=right;
            }
            else break;
        }
    }
}
    int size()
    {
        return idx-1;
    }

};
void print(minheap pq)
{
    while(pq.size()>0)
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
    cout<<endl;
}
int main()
{
    minheap pq;
    pq.push(10);
    pq.push(20);
    pq.push(11);
    pq.push(30);
    pq.push(40);
    pq.push(12);
    pq.push(4);
    pq.push(7);
    print(pq);
    cout<<pq.top()<<endl;
    pq.pop();
     print(pq);
    cout<<pq.top();
}