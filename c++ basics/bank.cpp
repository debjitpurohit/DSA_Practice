#include<bits/stdc++.h>
using namespace std;
int main()
{
    int total=99;
int notes;
cin>>notes;
  switch(notes){
    case 100: if(total>=100){notes=total/100; 
              total=total%100;
             cout<<"Total "<<notes<<" 100 rupee Notes required"<<endl;}
    case 50 : 
        if(total>=50) {
            notes=total/50;
            total=total%50;
            cout<<"Total "<<notes<<" 50 rupee Notes required"<<endl;}
    case 20: 
        if(total>=20) {
            notes=total/20;
            total=total%20;
            cout<<"Total "<<notes<<" 20 rupee Notes required"<<endl;}
    case 10:    
            if(total>=1) {
            notes=total/1;
            total=total%1;
            cout<<"Total "<<notes<<" 1 rupee coin required"<<endl;}
  }


    return 0;
}