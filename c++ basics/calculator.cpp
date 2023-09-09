#include<bits/stdc++.h>
using namespace std;
int main()
{
int a;
int b;
cout<<"Enter two numbers"<<endl;
cin>>a>>b;
cout<<"Enter the operation you want to perform"<<endl;
char op;
cin>>op;
switch (op)
{
case '+': { cout<<a+b<<endl;  }
    break;
case '-': cout<<a-b<<endl;  
    break;
case '*': cout<<a*b<<endl;
    break;
case '/': cout<<a/b<<endl;
    break;
case '%': cout<<a%b<<endl;
    break;
default: cout<<"Invalid operation"<<endl;
    break;
}

    return 0;
}