#include <iostream>
using namespace std;
class Human{
  public:
   int height ;
   int weight;
   int age;


   public:
    int get_age(){
    return this->age;
   }

   void set_weight(int w){
     this->weight =w;
   } 

};

class Male : protected Human {
   public:
   string color ;
   

   void sleep(){
    cout<<"Male is Sleeping " ;
   }

   int get_height(){
    return this->height ;
   }

};

int main (){

  Male obj1 ;
   cout<<obj1.get_height()<<endl;


//   cout<<obj1.age<<endl;
//   cout<<obj1.color<<endl;
//   cout<<obj1.height<<endl;
//   cout<<obj1.weight<<endl;
  
//   obj1.set_weight(73);
//   cout<<obj1.weight<<endl;
//   obj1.sleep();


return 0 ;
}