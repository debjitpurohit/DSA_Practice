#include<bits/stdc++.h>
using namespace std;


//linear search
bool isPresent(int arr[][4],int target,int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]==target) return true;
        }
    }
    return false;
}

void printrowsum(int arr[][4],int row,int col){
    for(int i=0;i<row;i++){
        int sum=0;
        for(int j=0;j<col;j++){
            sum+=arr[i][j];
        }
        cout<<"Sum of row "<<i<<" is "<<sum<<endl;
    }
}

void printcolsum(int arr[][4],int row,int col){
    for(int i=0;i<col;i++){
        int sum=0;
        for(int j=0;j<row;j++){
            sum+=arr[j][i];
        }
        cout<<"Sum of col "<<i<<" is "<<sum<<endl;
    }
}
int largestrowsum(int arr[][4],int row,int col){
    int largestsum=INT_MIN;
    int rowindex=-1;
    for(int i=0;i<row;i++){
        int sum=0;
        for(int j=0;j<col;j++){
            sum+=arr[i][j];
        }
        // largestsum=max(largestsum,sum);
        if(sum>largestsum){
            largestsum=sum;
            rowindex=i;
        }
    }
    cout<<"Largest row sum is "<<largestsum<<endl;
    return rowindex;
}

 


int main()
{
    // int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
//   int arr[3][4]={
//     {1,2,3,4},
//     {5,6,7,8},
//     {9,10,11,12}
//   }};
   int arr[3][4];

 //taking input ->>row wise input
  for(int row=0;row<3;row++){
    for(int col=0;col<4;col++){
      cin>>arr[row][col];
    }
  }

//taking input ->>column wise input
//     for(int col=0;col<4;col++){
//     for(int row=0;row<3;row++){
//       cin>>arr[row][col];
//     }
//   }


//output
    // for(int i=0;i<3;i++){
    // for(int j=0;j<4;j++){
    //   cout<<arr[i][j]<<" ";
    // }
    // cout<<endl;
    // }

// cout<<"Enter the element you want to search"<<endl;
// int target;
// cin>>target;

// if(isPresent(arr,target,3,4)){
//     cout<<"Element is present"<<endl;
// }
// else{
//     cout<<"Element is not present"<<endl;
// }
// printrowsum(arr,3,4);
// printcolsum(arr,3,4);
// int rowindex=largestrowsum(arr,3,4);
// cout<<"Row index with largest sum is "<<rowindex<<endl;

 



    
    return 0;
}