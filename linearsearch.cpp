#include<bits/stdc++.h>
using namespace std;

bool linearseacrh(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return true;
        }
    }
    return false;
}
int main()
{
int arr[5] = {1, 2, 3, 4, 5};

//wheather 1 is present in array or not
cout<<"en1ter the key"<<endl;
int key;
cin>>key;
if(linearseacrh(arr, 5, key))
{
    cout<<"element is present"<<endl;
}
else
{
    cout<<"element is not present"<<endl;
}

    return 0;
}