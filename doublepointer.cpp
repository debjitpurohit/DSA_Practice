#include<bits/stdc++.h>
using namespace std;

void update(int **ptr2)
{
    // ptr2=ptr2+1; //change hoga?? nahi pass by value hai

    //  *ptr2=*ptr2+1; //change hoga?? ha hoga pass by reference hai

    **ptr2=**ptr2+1; //change hoga??
}
int main()
{
  int i=10;
    int *ptr=&i;
    int **ptr2=&ptr;


    cout<<ptr<<endl; //value of ptr
    cout<<&ptr<<endl; // address of ptr

    cout<<*ptr2<<endl; // value of ptr2
    cout<<&ptr2<<endl; // address of ptr2
    cout<<ptr2<<endl; // value of ptr2
    //value of i
    cout<<i<<endl;
    cout<<*ptr<<endl;
    cout<<**ptr2<<endl;


    //value of ptr
    cout<<ptr<<endl;
    cout<<*ptr2<<endl;
    cout<<&i<<endl;

    //value of ptr2
    cout<<ptr2<<endl;
    cout<<&ptr<<endl;


    cout<<"*******************************************"<<endl;
    cout<<"before - >> "<<i<<endl;
    cout<<"before - >> "<<ptr<<endl;
        cout<<"before - >> "<<ptr2<<endl;
    update(ptr2);
    cout<<"after - >> "<<i<<endl;
      cout<<"after - >> "<<ptr<<endl;
        cout<<"after - >> "<<ptr2<<endl;

    return 0;
}