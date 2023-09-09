#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
// int ans=0;
// int i=0;
string s="";
while(n !=0){
    int bit = n&1;
    n=n>>1;
    // ans=bit*pow(10,i)+ ans;
    // i++;
    s+=to_string(bit);
    
}
// cout<<ans<<endl;
reverse(s.begin(),s.end());
cout<<s<<endl;


    return 0;
}