#include<bits/stdc++.h>
using namespace std;


//user defined data type




// #include "Hero.cpp" //external file

class Hero{
  public:  
//    char name[20];
   char *name;
     char level;
      static int timetocomplete;
   private:
   int health;
  
public:
    int getHealth(){
        return health;
    }
    char getLevel(){
        return level;
    }
    void setHealth(int h){
        health=h;
    }
    void setLevel(char ch){
        level=ch;
    }


    //constructor
    Hero(){
        name = new char[20];
        cout<<"default Constructor called"<<endl;
    }
    Hero(int health , char level){
        cout<<"this -> "<<this<<endl;
        this -> health=health;
        this -> level=level;
    }
     void print(){
        cout<<"[ Name is "<<this->name<<",";
        cout<<"Health is "<<this->health<<",";
        cout<<"Level is "<<this->level<<" ]";
        cout<<endl;
     }

     Hero (Hero& temp){
           char *ch =new char[strlen(temp.name)+1]; //create a new char array
           strcpy(ch,temp.name);
            cout<<"copy constructor called"<<endl;
            this->health=temp.health;
            this->level=temp.level;
            this->name=ch;
     }

    void setname(char name[]){
        // this->name=name;
        strcpy(this->name,name);
    }

    static int gettimetocomplete(){
        // return this->timetocomplete; // object e naii to this use kora jabe na
        return timetocomplete;
    }

    ~Hero(){
        cout<<"Destructor called"<<endl;
    }
   
};


////////////////class from external file///////////////////



//static initialization
int Hero::timetocomplete=10;




int main()
{



    // //creation of object
    // Hero debjit;
    // // debjit.health=100;
    // debjit.level='A';
    // debjit.name="Debjit";

    // // Hero2 h2;
    // cout<<sizeof(debjit)<<endl;// when we have only int in class then size is 4
    // // cout<<sizeof(h2)<<endl;
    // // cout<<"Health is "<<debjit.health<<endl;
    // cout<<"Name is "<<debjit.name<<endl;

    // ///////////getter setter
    // cout<<"Health is "<<debjit.getHealth()<<endl;
    // debjit.setHealth(200);
    // cout<<"Health is "<<debjit.getHealth()<<endl;

    //static allocation
    //  Hero a;
    // cout<<a.getLevel()<<endl;

    // //dynamic allocation
    // Hero *b=new Hero;

    // // (*b).setLevel('B');  
    // b -> setLevel('B'); //arrow operator
    // cout<<b->getLevel()<<endl;
    // cout<<(*b).getLevel()<<endl;


    //object creted
    // Hero ramesh;
    // // Hero suresh(100); //parameterized constructor
    // // cout<<"address of ramesh "<<&suresh<<endl;


    // //dynamic allocation
    // // Hero *suresh=new Hero;
    // Hero temp(100,'A');



    //copy constructor

    // Hero suresh(100,'A');
    // // suresh.setLevel('A');
    // // suresh.setHealth(100);
    // // Hero ritesh(suresh);
    // // ritesh.print();
    // Hero ramesh(suresh);
    // ramesh.print();

    // Hero h1;
    // h1.setHealth(100);
    // h1.setLevel('A');
    // char name[7]="Debjit";
    // h1.setname(name);
    
    // // h1.print();

    // //use default constructor
    // Hero h2(h1);
    // // h2.print();

    // h1.name[0]='A';
    // h1.print();
    // h2.print();
    // h1= h2;
    // h1.print();
    // h2.print();

    //destructors
    //static
    // Hero h1;

    // //dynamic
    // Hero *h2=new Hero;
    // //manually delete
    // delete h2;



//static print
cout<<Hero::timetocomplete<<endl;
cout<<Hero::gettimetocomplete()<<endl;










  
    return 0;
}