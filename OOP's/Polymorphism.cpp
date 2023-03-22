#include <iostream>
using namespace std;
class A {
public:
// Function overloading

 void func(){
    cout<< "Pratham chikara"<< endl;
 }

 int func(int n){
    cout<<"chikara"<< endl ;
    return n ;

 }
 void func( string name){
    cout<<"Hello "<<name<< endl;
 }


};



int main (){

A obj ;
obj.func();




return 0 ;
}