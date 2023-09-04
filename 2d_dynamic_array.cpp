#include<bits/stdc++.h>
using namespace std;
int main()
{
  int row,col;
  cin>>row>>col;
      //create 2d array in dunanmic array
  int **arr = new int*[row];
    for(int i=0;i<row;i++)
    {
        arr[i]=new int[col];
    }
    //input
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>arr[i][j];
        }
    }
    //output
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    //delete 2d array
    for(int i=0;i<row;i++)
    {
        delete [] arr[i];
    }
    delete [] arr;
    


    return 0;
}