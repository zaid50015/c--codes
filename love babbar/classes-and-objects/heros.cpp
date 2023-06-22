#include<bits/stdc++.h>
// class ka aur folder ka name same ho zaroori nahi hai
#include "villian.cpp"
using namespace std;
// In case of empty class object gets 1 byte
class Hero
{
// By default memebers are private and are only acessibble within the same class
int health;
char level;


// Yaha pa laken function in accessible hoga
/*int gethealth()
{
    return health;
}*/
public:
string name;
int health2;
// Acessing private data memeber using Getters and Setters

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
};
int main()
{
    //Creating an object h1 in stack
    Hero h1;
   // cout<<sizeof(h1)<<endl;
    string s;
  /*cin>>h1.health<<endl*/ // Not accessible cause it is a private member
  cin>>h1.name;
  cout<<h1.name<<endl;
  villian h2;
  cout<<"Villian name is=";
  cin>>h2.name;
  cout<<h2.name<<endl;
  h1.sethealth(70);
  cout<<"Hero one ki heath kitni hai="<<h1.gethealth()<<endl;


  // Creating the hero object dynamically;
  Hero*shaktiman=new Hero;
  cin>>shaktiman->name; // Better way of acessing using pointers
  cout<<(*shaktiman).name;//Not so good way
}