#include<bits/stdc++.h>
using namespace std;

void print(int *ptr)
{
    cout<<*ptr<<endl;
}

void incrementPointer(int *ptr)
{
    (*ptr)++;
    cout<<*ptr<<endl;
}

void updatePointer(int *ptr)
{
    ptr=ptr+1;
}

int getsum(int *arr,int n)
{
    cout<<"size ---->> "<<sizeof(arr)<<endl; /// so array is passed as pointer in function 
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    return sum;
}


int main()
{
   int value=5;
    int *ptr=&value;

    print(ptr); //5

    incrementPointer(ptr); //6 
    cout<<value<<endl; //6 
cout<<"before - >> "<<ptr<<endl;
    updatePointer(ptr); // no change
cout<<"after - >> "<<ptr<<endl;




int arr[10]={12,22,32,42,52,62,72,82,92,102};
    cout<<getsum(arr,10)<<endl;
    cout<<getsum(arr+2,8)<<endl;
    return 0;
}