#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;
    class student
    {
private:
        int number; // data member
        int age;
        char section;
        int health;
        public:
    void setHealth(int h) // member function
    {
        health=h;
    }
    int getHealth()
    {
        return health;
    }
    };
    
int main()
{
student laxmi ;
laxmi.setHealth(10);
cout<<laxmi.getHealth();
}