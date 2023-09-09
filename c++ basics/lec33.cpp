#include<bits/stdc++.h>
using namespace std;
int score=10;

void scr(){
    cout<<score<<endl;
}

///inline function
inline int getmax(int a,int b)
{
    return (a>b)?a:b;
}



int main()
{
 cout<<score<<endl;
scr();


int a=10,b=20;
func(a,b);


ans = getmax(a,b);
a=a+2;
b=b+1;
ans=getmax(a,b);
    return 0;
}