#include<bits/stdc++.h>
using namespace std;
class bike
{
    public:
int hp;
int race;
bike(int a)
{
    this->hp=a;
    cout<<"constructor called"<<endl;
}
};
int main()
{
    bike tvs(12);
    bike honda(11);
    cout<<tvs.hp;
    
}