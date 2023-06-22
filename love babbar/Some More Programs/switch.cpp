#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 1;
    cout << "Enter the amount" << endl;
    int amt;
    int notes = 0,remainder=0;
    cin >> amt;
    switch (n)

    {
    case 1:
        notes = amt / 100;
        if(notes>0)
        {
            cout<<"100 Rs="<<notes<<endl;
        }
        amt=amt%100;
        notes=amt/50;
        if(amt>0)
        {
            cout<<"50 Rs="<<notes<<endl;
        }
         amt=amt%50;
     
        notes=amt/20;
   
          if(notes>0)
        {
            cout<<"20 Rs="<<notes<<endl;
        }
        
         amt=amt%20;
         
        notes=amt/10;
          if(notes>0)
        {
            cout<<"10 Rs="<<notes<<endl;
        }
    }
}