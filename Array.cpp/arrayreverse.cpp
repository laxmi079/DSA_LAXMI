#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&v)
{
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i];
    }
    cout<<endl;
}
void reversepart(int i, int j , vector<int>&v)
{
    while(i<=j)
    {
        int temp=v[i];
         v[i]=v[j];
         v[j]=temp;
         i++;
         j--;
    }

    return;

}
int main()
{
    int k;
    cin>>k;
    vector<int>v;
    for(int i=1;i<8;i++)
    {
        int q;
        cin>>q;
        v.push_back(q);

    }
int n=v.size();
 display(v);
    reversepart(0,n-k-1,v);
    reversepart(n-k,n-1,v);
    reversepart(0,n-1,v);
    display(v);
}
