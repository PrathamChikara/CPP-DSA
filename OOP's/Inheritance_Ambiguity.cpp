#include <iostream>
using namespace std;



//Inheritance Ambiguity * * *


class A {
   public:
   void abc(){
    cout<<"Inside function abc of A"<< endl;
   }
};
class B {
   public:
   void abc(){
    cout<<"Inside function abc of B"<< endl ;

   }
};

class C : public A , public B {
   public:

    
   };




int main (){
 C obj ;
 // Using scope Resolution operator to tackle thne ambiguity * * *
 obj.A::abc();
 obj.B::abc();

return 0 ;
}