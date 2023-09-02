#include <bits/stdc++.h>
using namespace std;

int getmin(int arr[], int size)
{
    int mini = INT_MAX; // min initialise with maximum value
    for (int i = 0; i < size; i++)
    {
        // if (arr[i] < min)
        // {
        //     min = arr[i];
        // }
        mini = min(mini, arr[i]);
    }
    
    return mini;
}

int getmax(int arr[], int size)
{
    int maxi = INT_MIN; // max initialise with minimum value
    for (int i = 0; i < size; i++)
    {
        // if (arr[i] > max)
        // {
        //     max = arr[i];
        // }
        maxi = max(maxi, arr[i]);
    }
    return maxi;
}
int main()
{
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout<<"maximum value is "<< getmax(arr, size)<<endl;;
    cout<< "minimum value is "<<getmin(arr, size);

    return 0;
}