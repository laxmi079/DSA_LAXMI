#include<bits/stdc++.h>
#include<string>
using namespace std;
int binary_to_decimal(string &str)
{
    int n=str.size();
    int result=0;
    for(int i=n-1;i>=0;i--)
{
    char ch=str[i];
    int num= ch - '0';
result=result+num*(1 << (n-i-1));
}
return result;

}
string decimal_to_binary(int num)
{
    string result="";
while(num>0)
{
    if(num%2==0)
    {
result="0"+result;
    }
    else{
        result="1"+result;
    }
    num/=2; //or num=num>>1;
}
return result;
}
int main()
{
    string str;
    cin>>str;
    int num;
    cin>>num;
    cout<<binary_to_decimal(str)<<endl;
    cout<<decimal_to_binary(num);
    return 0;
}