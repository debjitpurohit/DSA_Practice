#include<bits/stdc++.h>
using namespace std;
bool canBeEqual(string s1, string s2) {
    int n=s1.length();
    int i=0,j=2;
        while(i < n && j < n ){
            if((j-i)%2==0){
                swap(s1[i],s1[j]);
                i++,j++;};
        }
        return s1==s2;
        
    }
int main()
{
    string s1="abcdba";
    string s2="cabdab";
    // if(canBeEqual(s1,s2)) cout<<"true"<<endl;
    // else cout<<"false"<<endl;
      for(int i=0;i<s1.size();i++){
          if(s1[i]!=s2[i]){
            int j;
              for(j=i+2;j<s1.size();j+=2)
                  if(s1[j]==s2[i])break;
              
              if(j<s1.size())
              swap(s1[i],s1[j]);
          }
      } 
        cout<<s1<<endl;


    return 0;
}