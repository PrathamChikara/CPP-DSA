#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Stack {
  public:
    // data members 
    int * arr ;
    int top  ;
    int size ;
  
  // making a constructor 
  Stack(int size){
    this->size =  size ;
    top =  -1; 
    arr = new int[size] ;
  }


  void push(int data) {
    if( size - top > 1){
        top++ ;
        arr[top] =  data ;

    }
    else{
        cout<<"Stack Overflow"<< endl ;
    }

}

void pop(){
   if(top >= 0){
    top-- ;
   }

   else{
      cout<<"stack underflow"<<endl ;
    
   }

}

 int peek(){
    if(top >= 0 ){
       return arr[top] ;
    }else {
       cout<<"stack is empty"<< endl;
       return -1 ;
     
    }
    
 }

 bool Empty(){
    if(top == -1){
        return true ;

    }else{
        return false ;
    }
    
 }
    
};

int main (){

     Stack s(5) ;
     s.push(1);
     s.push(2);
     s.push(3);
     s.push(4);
     s.push(5);

     cout<<s.peek()<< endl;

     s.pop() ;
     cout<<s.peek()<< endl;

     s.pop() ;
     cout<<s.peek()<< endl;
     s.pop() ;
     cout<<s.peek()<< endl;
     s.pop() ;
     cout<<s.peek()<< endl;
     s.pop() ;
     cout<<s.peek()<< endl;
     

     if(s.Empty()){
        cout<<" Stack is empty "<< endl ;
    
     }
     else{
        cout << "Stack is not empty"<< endl;

     }
    

   




   
return 0 ;
}