#include<bits/stdc++.h>
using namespace std;
class Hero
{int health;

public:
char level;
// Since character heap mai alloacte hua hai as a pointer to eski values mai changes show honge
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

    // Use default copy constructor
    // Shalow copy is done by default copy constructor
    Hero hero2(hero1);
    hero2.print();
    hero1.name[0]='C';
    hero1.sethealth(10);
    hero1.print();
    hero2.print();
    // Destructor is something that de allocates our memory
    // Dyanmic objects delete karne padte hai khud se
    Hero*shaktiman=new Hero();
    delete shaktiman;
    }