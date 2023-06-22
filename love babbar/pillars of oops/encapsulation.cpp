// Full encapsulation mai sare data menmbers private hote hai
// Encapasulation ka synonm man lo hiding of data
// Advanatage of encapsulation:-
//*Data hiding -security badh jayegi *Code Reuseability
//*We can make our class -read only
#include<bits/stdc++.h>
using namespace std;
class Student
{
private:
string name;
int height=55;
int weight;
public:
int getHeight()
{
    return height;
}

};
int main()
{
    Student ramesh;
    cout<<ramesh.getHeight();
}
