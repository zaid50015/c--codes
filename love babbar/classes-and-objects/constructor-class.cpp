#include<bits/stdc++.h>
using namespace std;
class Hero
{int health;
char level;
// Contsructor Private banoge to error dega
Hero()
{
    cout<<" Default Constructer is called"<<endl;
}




// Construct gets automtatically invoked as soon as object of the class is created
public:
string name;


/*Hero()
{
    cout<<"Constructer is called"<<endl;
}
*/
Hero(int health )
{
    this->health/*(means health at line 4 )*/ =health/*(means health jo es fuction mai pass hui hai)*/;
  
}


// Parametrized constructor
Hero(int health ,char level)
{
    
    this->health/*(means health at line 4 )*/ =health/*(means health jo es fuction mai pass hui hai)*/;
    this->level=level;
}


// Own Copy constructor pass by refrece dena zaroori
Hero(Hero&temp)
{ cout<<"My default copy constructor"<<endl;
 this->health=temp.health;// Agr neche object dyanimcally called nahi hai . varna ->
 this->level=temp.level;
}

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
    cout<<health<<endl;
    cout<<level<<endl;
}
};
    int main()
    {// Zaroori nahi hai dynamically karna
    cout<<"hello "<<endl;
        Hero*shaktiman=new Hero(30);
        cout<<shaktiman->gethealth()<<endl;
        cout<<"Bye"<<endl;
        Hero ramesh(70,'A');
        // Copying a constructor using default copy construcor;
        /*ramesh.print();
        Hero suresh(ramesh);
        suresh.print();*/

        //Copying and object using our own copy contsuctor upar defaukt vala destroy hoga
        Hero rajesh(ramesh);
        rajesh.print();
       
    }