#include<bits/stdc++.h>
using namespace std;
int main()
{
 cout<<"priority queue is stl verson of heap"<<endl;
 cout<<"max heap"<<endl;
 priority_queue<int> maxheap;
    maxheap.push(4);
    maxheap.push(2);
    maxheap.push(5);
    maxheap.push(3);
    cout<<"element at top "<<maxheap.top()<<endl;//5 that means it is max heap
    maxheap.pop();
    cout<<"element at top "<<maxheap.top()<<endl;//4 that means it deleted the root of max heap
    maxheap.pop();
    cout<<"element at top "<<maxheap.top()<<endl;//3 that means it deleted the root of max heap


cout<<"min heap"<<endl;
priority_queue<int,vector<int>,greater<int>> meanheap;
    meanheap.push(4);
    meanheap.push(2);
    meanheap.push(5);
    meanheap.push(3);
    cout<<"element at top "<<meanheap.top()<<endl;//2 that means it is min heap
    meanheap.pop();
    cout<<"element at top "<<meanheap.top()<<endl;//3 that means it deleted the root of min heap
    meanheap.pop();
    cout<<"element at top "<<meanheap.top()<<endl;//4 that means it deleted the root of min heap    

    return 0;
}