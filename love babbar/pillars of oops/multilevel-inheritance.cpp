#include<bits/stdc++.h>
using namespace std;
class Dog
{
    public:
    string bark;
};
class pug:public Dog
{
public:
int height;
};
class germanshepard:public pug
{

};
int main()
{
    germanshepard dog1;
    dog1.bark="BAhuu";
    dog1.height=100;
}