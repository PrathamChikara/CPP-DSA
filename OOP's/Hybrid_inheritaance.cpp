#include <iostream>
using namespace std;

// Hybrid Inheritance * * *

class A {
    public:
    void funcA(){
        cout<<"Inside func A"<< endl ; 

    }

};

class D {
    public :
    void funcD(){
        cout<< "Inside func D"<< endl;
    }
};

class B : public A {
    public:
    void funcB(){
        cout<<"Inside func B"<< endl;
    }
};

class C: public A,public D {
    public:
    void funcC(){
        cout<<"Inside func C"<<endl;
    }
};


int main (){

A obj1 ;
obj1.funcA();

B obj2 ;
obj2.funcA();
obj2.funcB();

C obj3 ;
obj3.funcA();
obj3.funcD();
obj3.funcC();




return 0 ;
}