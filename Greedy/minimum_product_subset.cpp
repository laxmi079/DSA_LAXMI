#include<bits/stdc++.h>
using namespace std;
int minproduct(vector<int>&arr)
{
int cp=0;
int cz=0;
int cn=0;
int prod_positive=1;
int prod_neg=1;
int largest_negative=INT_MIN;
for(int i=0;i<arr.size();i++)
{
    if(arr[i]<0) 
    {
        cn++;
        prod_neg*=arr[i];
        largest_negative=max(largest_negative,arr[i]);
    }
    if(arr[i]>0)
    {
         cp++;
         prod_positive*=arr[i];
    }
     if(arr[i]==0) cz++;
}

 if(cn==0)
{
  if(cz>0) return 0;
  else{
 auto it=min_element(arr.begin(),arr.end());
 return *it;
  }
}
else{ // cn>0
  if(cn%2==0) //even no. of negative elements
  {
return  (prod_neg/largest_negative)*prod_positive;
  }
  else //odd no. of negative elements
  {
    return prod_positive*prod_neg;
  }
}
}
int main()
{
vector<int>arr={-1,-1,-2,4,3};
cout<<minproduct(arr);
}