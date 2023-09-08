#include<bits/stdc++.h>
using namespace std;

int getsum(int arr[],int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    return sum;
}
int main()
{
   int n;
    cin>>n;
    // int arr[n];//bad practice


    int *arr=new int[n];//good practice bcz it use heap memory(if we got larger value of n then it will not give error if we use int arr[n] then it will give error)
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<getsum(arr,n)<<endl;
    // while(true){
    //     int *ptr = new int;
    // }
    delete [] arr; //delete dynamic array


 

    return 0;
}