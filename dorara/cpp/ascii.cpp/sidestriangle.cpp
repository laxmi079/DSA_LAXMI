#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter 1st side";
    cin>>a;
    cout<<"enter 2nd side";
    cin>>b;
    cout<<"enter 3rd side";
    cin>>c;
    if((a+b>c)||(b+c>a)||(a+c>b))
    {
        cout<<"sides of a triangle";
            }
            else{
                cout<<"not the sides of a triangle";
            }
}