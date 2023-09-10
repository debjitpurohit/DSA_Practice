#include<bits/stdc++.h>
using namespace std;

class Stack{
    //properties
   public:
    int *arr;
    int top;
    int size;


    //methods
    //constructor for stack initialization
  Stack(int size)
  {
      this->size=size;
      arr=new int[size];
      top= -1;
  }
    //push operation
    void push(int data)
    {
        if(size-top > 1 )
        {//atleast one space should available
            top++;
            arr[top]=data;
        }
        else
        {
            cout<<"Stack Overflow"<<endl;
        }

    }

    //pop operation
    void pop()
    {
        if(top==-1)
        {
            cout<<"Stack is empty"<<endl;
        }
        else
        {
            top--;
        }
    }

    //top operation
    int Top()
    {
        if(top==-1)
        {
            cout<<"Stack is empty2"<<endl;
            return -1;
        }
        else
        {
            return arr[top];
        }
    }

    //empty operation
    void empty()
    {
        if(top==-1)
        {
            cout<<"Stack is empty"<<endl;
        }
        else
        {
            cout<<"Stack is not empty"<<endl;
        }
    }

};

int main()
{
    //stack creation
    Stack s(5); // size of stack is 5
    //push operation
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6); //stack overflow
    //pop operation
    s.pop();
     s.pop();
    s.pop();
    s.pop();
    s.pop();
    //top operation
    cout<<s.Top()<<endl;
    //empty operation
    s.empty();

    return 0;
}