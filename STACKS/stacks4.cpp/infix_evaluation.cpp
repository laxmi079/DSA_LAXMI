//vvi

#include<bits/stdc++.h>
#include<stack>
using namespace std;
int priority(char ch) {
    if (ch == '+' || ch == '-')
        return 1;
    else if (ch == '*' || ch == '/')
        return 2;
    else
        return 0; // Handle other characters, if any
}

int solve(int val1, int val2, char ch)
{
if(ch=='+') return val1+val2;
else if(ch=='-') return val1-val2;
else if(ch=='*') return val1*val2;
else if(ch=='/') return val1/val2;
}
int main()
{
    string s="2+6*4/8-3";
 stack<char>op;
 stack<int>val;
for(int i=0;i<s.length();i++)
{
    //check if s[i] is a digit (0-9)
    if(s[i]>=48 && s[i]<=57) val.push(s[i]-48);
    else{ // +,-,*,/
        if(op.size()==0 || priority(s[i])>priority(op.top())) op.push(s[i]); 
        else{
            //work ,priority(s[i])<=priority(op.top())
            while(op.size()>0 && priority(s[i])<=priority(op.top()))
            {
                //i have to do val1 op val2
                char ch=op.top();
                op.pop();
                int val2= val.top();
                val.pop();
                int val1=val.top();
                val.pop();
                int ans=solve(val1,val2,ch);
                val.push(ans);
            }
            op.push(s[i]);
        }
    }
}
//the operator stack may have values, so make it empty
  //work
  while(op.size()>0)
  {
         char ch=op.top();
                op.pop();
                int val2= val.top();
                val.pop();
                int val1=val.top();
                val.pop();
                int ans=solve(val1,val2,ch);
                val.push(ans);
  }
  cout<<val.top();
}
