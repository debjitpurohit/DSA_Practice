#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int prev1=1;
    int prev2=0;
    int curr;
    for(int i=2;i<=n;i++)
    {
        curr=prev1+prev2;
        //shift the pointers
        prev2=prev1;
        prev1=curr;
    }
    cout<<curr<<endl;
    return 0;
}