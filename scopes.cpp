#include<bits/stdc++.h>
using namespace std;

void update(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        arr[i] = arr[i] + 1;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[10] = {1, 2, 3, 4, 5};
    update(arr, 5);

    return 0;
}