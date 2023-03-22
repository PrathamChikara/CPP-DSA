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

class Dog : public Animal{

};

// Multi Level Inheritance * * * 
class German_Shepheard : public Dog{

};

int main (){
 German_Shepheard a ;
 a.speak();

return 0 ;
}