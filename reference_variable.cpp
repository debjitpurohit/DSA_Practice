#include<bits/stdc++.h>
using namespace std;



void update1(int n)
{
    n++;
}
//pass by reference referance variable
void update2(int &n)
{
    n++;
}

int main()
{
  int i=5;
//   int& j=i;
//   cout<<i<<endl;
//   i++;
//     cout<<i<<endl;
//     j++;

int b=10;
cout<<"before - "<<b<<endl;
update1(b);
cout<<"after - "<<b<<endl;
update2(b);
cout<<"after update1- "<<b<<endl;
    return 0;
}
