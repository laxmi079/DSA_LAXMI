#include<iostream>
using namespace std;
int fun(int x,int y)
{
    cout<<"address of fun x"<<&x;cout<<endl;
    cout<<"address of fun y"<<&y;
}

int main()

{
    int x;
    int y;
    cout<<"address of main x"<<&x;cout<<endl;
    cout<<"address of main y"<<&y;cout<<endl;
    fun(x,y);

}