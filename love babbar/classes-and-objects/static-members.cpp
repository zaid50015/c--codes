#include<bits/stdc++.h>
using namespace std;
class Hero
{int health;

public:
char level;
// Static members need no object creation for acessing
static int timetoComplete;


int gethealth()
{
    return health;
}
void sethealth(int x)
 {
   health=x;
 } 
 char getlevel()
 {
     return level;
 }
 void setlevel(char l)
{
    level=l;
}

void print()
{
    cout<<endl;
    cout<<" Health: "<<this->health<<", ";
    cout<<"Level: "<<this->level<<"]";
   
    cout<<endl;
}
//Static function  can only acess static members no other members are accessible by them
static int random()
{
    return timetoComplete;
}

};
 int Hero::timetoComplete=5;
int main()
{
  cout<<Hero::timetoComplete<<endl;
  cout<<Hero::random()<<endl;
}