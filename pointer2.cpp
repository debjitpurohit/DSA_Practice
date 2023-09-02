#include<bits/stdc++.h>
using namespace std;
int main()
{
 int arr[10]={12,22,32,42,52,62,72,82,92,102};
 cout<<"address of first memory location "<<arr<<endl;
 cout<<"address of first memory location "<<&arr[0]<<endl;
 cout<<"value at first memory location "<<*arr<<endl;
    cout<<"value at first memory location "<<arr[0]<<endl;
    cout<<"address of second memory location "<<arr+1<<endl;
    cout<<"value at second memory location "<<*(arr+1)<<endl;
    cout<<(*arr)+1<<endl;


cout<<"**************************************************"<<endl;

    cout<<arr[3]<<endl;
    cout<<*(arr+3)<<endl;
    cout<<3[arr]<<endl;
    cout<<*(3+arr)<<endl;


cout<<"*******************************************"<<endl;
    cout<<sizeof(arr)<<endl;
    int *ptr = &arr[0];
    cout<<sizeof(ptr)<<endl;
    cout<<sizeof(*ptr)<<endl; // size of 1st integer in array like 23 in frist location 
    cout<<sizeof(&ptr)<<endl; // size of pointer
    cout<<&ptr<<endl; // address of pointer
    cout<<&arr[0]<<endl; // address of first element of array
    return 0;
}