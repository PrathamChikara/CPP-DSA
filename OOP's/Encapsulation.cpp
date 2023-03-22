#include <iostream>
using namespace std;

class student{
   private:
   string Name ;         //  This is Encapsulation only * * * * * *
   int Age =21 ;
   int Height;

   public:

   int get_age(){
    return this->Age;
   }


};
int main (){

student first ;
cout<<first.get_age();

return 0 ;
}