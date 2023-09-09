#include<bits/stdc++.h>
using namespace std;
int main()
{
   int num=5;
   cout<<num<<endl;
   //address of num
   cout<<"address of num "<<&num<<endl;
   int *ptr=&num;
    cout<<"address of ptr "<<ptr<<endl;
    cout<<"value of ptr "<<*ptr<<endl;
    cout<<"size of num "<< sizeof(num)<<endl;
    cout<<"size of ptr "<< sizeof(ptr)<<endl;
    int *p = 0;//null pointer
    p=&num;
    cout<<"address of p "<<p<<endl;


    int *p2= &num;
    cout<<"before "<<num<<endl;
    (*p2)++;
    cout<<"after "<<num<<endl;



    /////pointer arithmetic
 

    cout<<"address of p2 before "<<p2<<endl;
    p2=p2+1;
    cout<<"address of p2 after "<<p2<<endl;





    return 0;
}