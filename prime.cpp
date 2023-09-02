#include<bits/stdc++.h>
using namespace std;

bool isprime(int n){
    //1 is not a prime number
    for(int i=2;i<n;i++){
        //devide ho gya
        if(n%i==0) return false;
    }
    return true;
}
int main()
{
    int n;
    cin>>n;
    if(isprime(n)) cout<<"is prime number "<<endl;
    else cout<<"Not prime number"<<endl;

    return 0;
}