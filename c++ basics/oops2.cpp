#include<bits/stdc++.h>
using namespace std;

/// encapsulation*****************************
class Student{
    private:
        string name;  
        int age;
        int rollNo;

    public:
    int getAge(){
          return this->age;
      }    
};

//inheritance*********************************
// class Human{
//     public:
//     int height;
//     int weight;
//     protected:
//     int age;

//     public:
//     int getAge(){
//         return this->age;
//     }
//     void setweight(int weight){
//         this->weight=weight;
//     }
// };

// class Male : protected Human{
//     public:
//     string color;

//     void sleep(){
//         cout<<"male is sleeping"<<endl;
//     }
//     // protected that menas can be access inside the class as well as  in the child class
//     int getAge(){
//         return this->age;
//     }
// };




//polymorphism*********************************
// class B{
//     public:
//     int a;
//     int b;
//     void sayhello(){
//         cout<<"hello debu"<<endl;
//     }
    //function overloading
    // void sayhello(string name){
    //     cout<<"hello debu "<<name<<endl;
    // }
    // int sayhello(){
    //     cout<<"hello debu"<<endl;
    //     return 1;
    // }


    //operator overloading
//     void operator+(B &obj){
//         int value1= this->a;
//         int value2= obj.a;
//         cout<<"operator overloading  "<< value2-value1<<endl;
//     }

//     void operator() () {
//         cout<<"this is bracjet"<<this->a<<endl;
//     }

// };
// class Animal{
//     public:
//     void speak(){
//         cout<<"animal is speaking"<<endl;
//     }
// };


// class Dog : public Animal{
//     public:
//     //same function but different method is called rum time polymorphism
//     void speak(){
//         cout<<"animal barking"<<endl;
//     }
// };


int main()
{
 // encapsulation*****************************
  Student f;
//  f.setage(10);
cout<<f.getAge(); 


// Male obj1;
// cout<<obj1.age<<endl;
// cout<<obj1.height<<endl;
// cout<<obj1.weight<<endl;
// cout<<obj1.color<<endl;
// obj1.sleep();
// obj1.setweight(50);
// // cout<<obj1.weight<<endl;
// Male m1;
// cout<<m1.getAge()<<endl;

//polymorphism*********************************
// A obj1;
// obj1.sayhello();


// B obj1,obj2;
// obj1.a=10;
// obj2.a=20;
// obj1+obj2;
// B obj1;
// obj1.a=10;
// obj1();
// Animal obj2;
// obj2.speak();
// Dog obj;
// obj.speak();


    return 0;
}