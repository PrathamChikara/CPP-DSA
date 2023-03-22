#include <iostream>
using namespace std;
class Animal{
 public:

 int age ;
 int weight ;


 void speak(){
    cout<<"speaking"<< endl ;
 }
 
};
// Single Level Inheritance * * * 
class Dog : public Animal{

};
int main (){

 Dog d ;
 d.speak();

return 0 ;
}