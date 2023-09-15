#include<bits/stdc++.h>
using namespace std;
int fib(int n,vector<int> &dp)
{
    if(n==0 || n==1)
    {
        return n;
    }
    //step3: check if the state is already computed
    if(dp[n]!=-1)
    {
        return dp[n];
    }
    //step2: apply the recurrance relation
    dp[n]=fib(n-1,dp)+fib(n-2,dp);
    return dp[n];
}
int main()
{
  int n;
  cin>>n;
  //step 1: create a dp array
  vector<int> dp(n+1,-1);
  cout<<fib(n,dp)<<endl;
    return 0;
}
