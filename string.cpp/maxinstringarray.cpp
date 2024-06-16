#include<iostream>
#include<string>
#include<vector>
#include<sstream>
#include<algorithm>
using namespace std;
int main()
{
    string arr[]={"12345","009484","92085","002999"};
    int max=stoi(arr[0]);
    string maxs = arr[0];
    for(int i=1;i<=4;i++)
    {
        int x=stoi(arr[i]);
        if(x>max) {
            max=x;
            maxs = arr[i];
            
    }
    
}
    cout<<maxs;

}