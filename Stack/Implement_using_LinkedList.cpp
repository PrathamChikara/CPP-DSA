#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class node{
     public:
     int data ;
     node * next ;
  
  node(int data){
    this->data =  data ;
    next = NULL;
  }
 };

class Stack {
    public:
    node * head ; 
    node * top ;
    int size ;

 Stack(int size ){
    this->size = size ;
    top = NULL;
 }

void push(int data){
    int count = 0;
    node * temp = top;
    while(temp != NULL){
        temp =  temp->next ;
        count++;
    }
    if(count< size){
      node * new_node = new node(data);
        if(count == 0){ 
        top = new_node;
        }
        else{
         new_node ->next = top ;
         top =  new_node ;
        }
    }
    else{
        cout<<"Stack Overflow"<< endl;

    }
}
 void pop(){
    if(top == NULL){
        cout<<"stack Underflow"<< endl ;
    }
    else{
     node * temp = top ;
     cout<<"deleted value is : "<<temp->data<< endl ;
      top = top-> next; 
      delete temp ;
    }
 }

  int peek(){
    if(top == NULL){
       cout<<"stack is empty"<< endl; 
       return 0 ; 
    }else{
        return top->data; 
    
    }
  }
bool is_empty(){
    if( top == NULL){
        cout<<"Stack is empty"<< endl; 
        return true ;
    }
    else{
        cout<<"Stack is not empty"<< endl; 
        return false ;
    }
}

};

int main (){
   Stack s (4);
   s.push(1);
   s.push(2);
   s.push(3);
   s.push(4);

   s.pop();
   s.pop();
   s.pop();
   s.pop();
   s.pop();

   cout<<s.peek()<<endl;
   cout<<s.is_empty();
return 0 ;
}