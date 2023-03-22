#include <iostream>
using namespace std;

class A {
 public:
    int a ;
    int b ;
    public:
    
   int  add(){
    return a + b ;
   }

// Overloading Operator * * *

 void operator+ (A &obj){
//    int value1 = this->a ;
//    int value2 = obj.a ;
//    cout<< value2  -  value1<< endl ;

cout<< "Hello Pratham chikara"<< endl ;

} 


// Overloading Bracket  * * *
 void operator() (){
    cout<<" Overloading Bracket "<<this->a<< endl ;

 }
};
int main (){

A obj1 ;
obj1.a =  10 ;
A obj2 ;
obj2.a =  15 ;

obj1 + obj2 ;

obj2();






    return 0;
}




