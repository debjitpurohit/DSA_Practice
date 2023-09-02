#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[],int size,int key){
    int start = 0 ;
    int end=size-1;
    int mid = start+(end-start)/2; /////optimisation
    while(start<=end){
        if(arr[mid]==key) return mid;
        //go to right part
        if(key> arr[mid]){
            start=mid+1;
        }
        //go to the left part
        else end=mid-1;
        //jehetu amra start or end ta ke change korchi to again we have to find middle element 
        mid = start+(end-start)/2;
    }
    //if the key  is not found
    return -1;
}

int main()
{
  int arr[6]={1 ,3 ,4,2,5,6}; 
  sort(arr,arr+6); ///array must be sorted
  int index= binarySearch(arr,6,2);
  if(index==-1) cout<<"Key is not present in array";
  else cout<<"Key is present in "<<index<<" index"<<endl;
  

    return 0;
}