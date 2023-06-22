#include<bits/stdc++.h>
using namespace std;
class Hero
{int health;

public:
char level;
Hero()
{

}
 Hero(Hero &temp)
 {
     char*ch=new char[strlen(temp.name)+1];
     strcpy(ch,temp.name);
     this->name=ch;
     this->health=temp.health;
     this->level=temp.level;
 }
// Agar oject dynamically banate to
/* Hero(Hero *temp)
 {
     char*temp=new char[strlen(temp->name)+1];
     this->health=temp->health;
     this->level=temp->level;
 }*/
char *name=new char[100];

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
void setName(char name[])
{
    strcpy(this->name,name);
}
void print()
{
    cout<<endl;
     cout<<"[ Name: "<<this->name<<", ";
    cout<<" Health: "<<this->health<<", ";
    cout<<"Level: "<<this->level<<"]";
   
    cout<<endl;
}

};
int main()
{
    Hero hero1;
    char name[7]="Babbar";
    hero1.setName(name);
    hero1.sethealth(7);
    hero1.setlevel('D');
   
    hero1.print();
  
  Hero hero2(hero1);
  hero2.print();
  hero1.name[0]='C';
  hero1.print();
  hero2.print();
}