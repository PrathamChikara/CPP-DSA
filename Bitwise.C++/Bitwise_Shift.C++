#include <iostream>
using namespace std;
int main (){
    int a ;
    int b;
    cout<< "Enter the two numbers : ";
    cin>>a;
    cin>>b;
    cout<<"a&b : "<<(a&b)<<endl;
    cout<<"a|b : "<<(a|b)<<endl;
    cout<<"~a : "<<(~a)<<endl;
    cout<<"a^b : "<<(a^b)<<endl; 
    
    cout<< (17>>1) <<endl;
    cout<< (17>>2) <<endl;
    cout<< (19<<1) <<endl;
    cout<< (21<<2) <<endl;


    // Increment and decrement
    int i=7;
    cout<< ++i<< endl;
    cout<< i++<< endl;
    cout<< i--<< endl;
    cout<< --i<< endl;




    return 0;


}