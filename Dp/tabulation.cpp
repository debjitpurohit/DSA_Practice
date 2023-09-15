#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  //step1: create a dp array
  vector<int> dp(n+1);
  //step2: initialize the base case
    dp[0]=0;
    dp[1]=1;
    //step3: apply the recurrance relation
    for(int i=2;i<=n;i++)
    {
        dp[i]=dp[i-1]+dp[i-2];
    }
    //step4: print the result
    cout<<dp[n]<<endl;
    return 0;
}