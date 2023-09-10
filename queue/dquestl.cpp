#include<bits/stdc++.h>
using namespace std;
int main()
{
  deque<int> dq;
    dq.push_front(5);

    dq.push_front(10);
    dq.push_front(20);
    dq.push_back(30);
    dq.push_back(40);
    dq.push_back(50);

    cout<<dq.front()<<endl;
    cout<<dq.back()<<endl;
    dq.pop_front();
    dq.pop_back();
    cout<<dq.front()<<endl;
    cout<<dq.back()<<endl;
    cout<<dq.size()<<endl;
    cout<<dq.empty()<<endl;

    return 0;
}