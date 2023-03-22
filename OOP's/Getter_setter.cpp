#include <iostream>
using namespace std;
class Hero {
    private:
    int health ;


    public:
     char level ;

// Default Constructor * * *
    Hero(){
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


// Copy constructor * * * 
 Hero(Hero& temp){
    cout<<"Copy contructor is called"<< endl;
    this->health = temp.health;
    this->level = temp.level;
 }
    
    void print(){
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


};

int main (){


Hero S(70 ,'C');
S.print();

// Copy Contructor is Called * * *
Hero R(S);
R.print();






 // Hero Ram(30);
  //cout<<"Address of a is : "<<&Ram<< endl ;


//  Hero * p =  new Hero(22 ,'B'); // this and Hero * p =  new Hero(); will do the same thing * * * * *
//  cout<<p->level<<endl;
//  cout<<(*p).level;


// // Static Allocation * * *
//   Hero Ram;
//   Ram.set_health(80);
//   Ram.set_level('A');
 
//    cout<<"Level is: "<<Ram.level<<endl ;
//    cout<<"Health is: "<<Ram.get_health()<<endl;

// // Dynamic Allocation * * *
// Hero *b = new Hero;
// b->set_health(70);
// b->set_level('B');
// cout<<"Level is: "<<(*b).level<<endl ;
// cout<<"Health is: "<<(*b).get_health()<<endl;

// // another method to access while using dynamic allocattion  * * *
// cout<<"Level is: "<<b->level<<endl ;
// cout<<"Health is: "<<b->get_health()<<endl;






   
//    Ram.set_health(70);
//    cout<<Ram.get_health();

//   //Ram.health = 70;
//   Ram.level = 'A';


//   //cout<< Ram.health<< endl ;
//   cout<<Ram.level<< endl;

 

return 0 ;
}