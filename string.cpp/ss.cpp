#include<iostream>
#include<string>
#include<vector>
#include<sstream>
using namespace std;
int main()
    {
            string str=" i dont love you";
stringstream ss(str);
string temp;
while(ss>>temp)
{
    cout<<temp<<endl;
}
    }
