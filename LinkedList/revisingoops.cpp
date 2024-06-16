#include<bits/stdc++.h>
#include<string>
using namespace std;
class student
{
public:
string name;
int roll;
char section;
student(string name, int roll , char section)
{
    this->name=name;
    this->roll= roll;
    this->section=section;
}
};
void change(student* s)
{
   s->name="laxmi";
}
int main()
{
// student nirmal("nirmal",12,'A');
// cout<<nirmal.name<<endl;
// student *ptr=&nirmal;
// (*ptr).name="raghacv";
// cout<<nirmal.name<<endl;
// change(&nirmal);
// cout<<nirmal.name<<endl;
student *s= new student ("ria",11,'B');
change(s);

cout<<(s->name)<<endl;
}