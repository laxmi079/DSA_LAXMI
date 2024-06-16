#include<iostream>
using namespace std;

void startriangle(int x)
{

    for(int i=1;i<=x;i++)
    {
        cout<<"*";
    }
    cout<<endl;
}
    int main()
    {
     startriangle(2);
    startriangle(4);
    startriangle(7);
    }