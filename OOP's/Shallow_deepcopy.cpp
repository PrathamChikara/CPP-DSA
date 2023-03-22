#include <iostream>
#include<bits/stdc++.h>
using namespace std;
class Hero {
    private:
    int health ;


    public:
     char *name;
     char level ;
     static int time_to_complete ;


// Default Constructor * * *
    Hero(){
    name = new char[100];
    cout<<"Default constructor is called"<< endl;
    }


    Hero(int health){
    cout<<"value of this is :"<< this << endl;
    this->health = health ;
    cout<<"My New Constructor"<<endl;
    }

// Creating multiple parameterized constructor with different types and number of parametrs * * *
    Hero(int health , char level){
        this->health = health ;
        this->level  = level;
    }


//Copy constructor * * * 
 Hero(Hero& temp){
    // Deep copy * * *    
    char *ch = new char[strlen(temp.name) +1]; // +1 for NUll character * * * 
    strcpy(ch,temp.name);
    this->name = ch ;

    cout<<"Copy contructor is called"<< endl;
    this->health = temp.health;
    this->level = temp.level;
 }
    
    void print(){
        cout<<"Name is :"<<this->name<<endl;
        cout<<"Health is :"<<this->health<<endl ;
        cout<<"Level is :"<<this->level<<endl ;


    }
    int get_health(){
        return health;
    }
    int set_health(int h){
        health = h;
    }
    char get_level(){
        return level;
    }
    char set_level(int l){
         level= l;
    }

    void set_name(char name[]){
        strcpy(this->name,name);
    }


    // Static functions * * *
    static int random(){
        return time_to_complete ; // It can only access static members * * * 
    
    }

    ~Hero(){
        cout<<"Destructor called"<< endl;
    }
};
// static field/data member initialisation is done outside the class * * *
int Hero::time_to_complete = 5;

int main (){

cout<<Hero::time_to_complete<<endl;

// calling static function  * * *
cout<<Hero::random();





// // Statically Allocated , Destructor called automatically * * *
// Hero h1;

// // Dynamically Allocated  ,  Manually calling Destructor * * * 
// Hero* b = new Hero;

// delete b;







// Hero hero1 ;
// hero1.set_level('D');
// hero1.set_health(70);
// char name[8] = "Captain";
// hero1.set_name(name);
// hero1.print();

// Hero hero2(hero1);
// //hero2.print();

// hero1.name[0] ='G';
// hero1.print();

// hero2.print();

// // Copy assingment Operator * * *  
// hero1 = hero2;
// hero1.print();

// hero2.print();



return 0 ;
}