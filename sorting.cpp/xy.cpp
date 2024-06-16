#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
string s="ABCDXYDSFHYYXJFYZJJZUU";
string str="";
for(int i=0;i<s.length();i++)
{
    if(s[i]>='X')
str.push_back(s[i]);
}
for(int i=0;i<s.length();i++)
{
   cout<<str[i]<<" ";
}
cout<<endl;
int n=str.length();

 for(int i=0;i<n-1;i++)

{
    bool flag=true;
    for(int j=0;j<n-1-i;j++)
    {
        if(str[j]>str[j+1])
        {
            swap(str[j],str[j+1]);
           flag =false;
        }
    }
    if(flag == true)
{
     break;
}

}
for(int i=0;i<n;i++)
{
    cout<<str[i]<<" ";
}
}





