#include<bits/stdc++.h>
#include<string>
using namespace std;
class player
{
private:
int age;
int health;
int marks;
public:
int gethealth()
{
    return health;
}
int getage()
{
    return age;
}
int getmarks()
{
    return marks;
}
void setage(int a)
{
    this->age=a;
}
void setmarks(int m)
{
    this->marks=m;
}
void sethealth(int h)
{
    this->health=h;
}
};
int addscore(player a,player b)
{
    return a.getmarks() + b.getmarks();
}
player getmaxscoreplayer(player a , player b)
{
    if(a.getmarks()>b.getmarks())  return a;
    else return b;
}
int main()
{
player harsha;
player shukla;
player *urvi=new player;
player urviObject= *urvi;
harsha.setage(90);
shukla.setage(67);
harsha.sethealth(9);
shukla.sethealth(10);
harsha.setmarks(100);
shukla.setmarks(80);
urviObject.setage(19);
cout<<urviObject.getage()<<endl;;
cout<<shukla.getage()<<" ";
cout<<addscore(harsha,shukla)<<" ";
player saket= getmaxscoreplayer(shukla , harsha);
cout<<saket.getmarks();

}