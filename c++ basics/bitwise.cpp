#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a = 4;
    int b = 6;
    int neg= -4;
    cout << " a and b= " << (a & b) << endl;
    cout << " a or b= " << (a | b) << endl;
    cout << " a xor b= " << (a ^ b) << endl;
    cout << " not a= " << (~a) << endl;
    cout << " a left shift by 2= " << (a << 2) << endl;
    cout << " a right shift by 2= " << (a >> 2) << endl;
    //---------------------------------------------------------------------------------
    cout<< " neg left shift by 2= "<< (neg<<2)<<endl;
    cout << " neg right shift by 2= " << (neg >> 2) << endl;
    //-----------------pre and post increment and decrement----------------------------------------------------------------
    cout<<++a<<endl;//for pre increment first increment then use the value
    cout<<a++<<endl;//for post increment first use then increment
    cout<<a<<endl;
    cout<<--a<<endl;
    cout<<a--<<endl;
    cout<<a<<endl;

    return 0;
}