#include<bits/stdc++.h>
using namespace std;

void print(stack<int> s)
{
    if(s.empty())
    {
        return;
    }
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
}
int main()
{
    //stack creation
  stack<int> s;
  //push operation
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    //print operation
    print(s);
    //pop operation
    s.pop();
    print(s);
    //top operation
    cout<<s.top()<<endl;
    //empty operation
    if(s.empty())
    {
        cout<<"Empty"<<endl;
    }
    else
    {
        cout<<"Not Empty"<<endl;
    }


    return 0;
}