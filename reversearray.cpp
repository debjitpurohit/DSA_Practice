#include <bits/stdc++.h>
using namespace std;

void reverse(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // process 1----------------------------------------------------
    // reversing the array
    //  int reverse[4];
    //  int k=2;
    //  for(int i=0;i<4;i++){
    //      reverse[i]=arr[i+(n-1)-i*k];
    //  }

    // //printing array
    // for(int i=0;i<4;i++){
    //     cout<<reverse[i]<<" ";
    // }cout<<endl;

    /////process 2------------------------------------------
    // reverse(arr,arr+n);
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }cout<<endl;

    //process 3------------------------------------------------
    reverse(arr, 4);
    for (int i = 0; i < 4; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}