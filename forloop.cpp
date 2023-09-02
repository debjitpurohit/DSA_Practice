#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   ////process 1-------------------------
    for(int i=0;i<n;i++)
    {
        cout<<i<<endl;
    }
    //process 2---------------------------
    int j=1;
    for(;j<=n;j++)
    {
        cout<<j<<endl;
    }
    //process 3---------------------------
    int k=1;
    for(;k<=n;)
    {
        cout<<k<<endl;
        k++;
    }
    //process 4---------------------------
    int i=1;
    for(; ;)
    {
        if(i<=n)
        {
            cout<<i<<endl;
        }
        else {
            break;
        }
       
        i++;
    }


    //for multiple variable-----for((starting value 0f 2),(starting value 0f 2);(condation1),(condation2);(operation1 ), (operation2))
    for(int i=0,j=0;i<=n && j<=n;i++,j++)
    {
        cout<<i<<" "<<j<<endl;
    }

    return 0;
}
