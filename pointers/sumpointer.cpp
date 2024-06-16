#include<iostream>
using namespace std;
int main()
{
    int x=2,y=4;
    int* p1=&x;
    int* p2=&y;
    cout<<*p1+*p2;
}