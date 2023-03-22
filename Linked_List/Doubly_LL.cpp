#include <iostream>
using namespace std;
class node{
   public:
   node * prev;
   int data ;
   node * next ;


  node(int data){
   this->data = data ;
   this->prev =  NULL ;
   this->next =  NULL ;
  }

  ~node(){
   int value = this->data ;
   if(next != NULL){
      delete next;
      next = NULL ;

   }
   cout<<"Memory freed of Value : "<<value<<endl;

  }
   
};

void insert_at_head(node *  &tail ,node* &head ,int data){

// if we have empty list * * * 
if(head == NULL){
   node * temp = new node(data) ;
   head = temp ;
   tail =  temp ;


}else{
   node* temp = new node(data);
   temp->next = head ;
   head->prev = temp ; 
   head = temp ;
}
}
void insert_at_tail(node * &head ,node * &tail ,int data){
  if(tail == NULL){
   node *  temp =  new node(data);
   tail = temp ;
   head = temp ;
   

  }else{
   node* temp = new node(data);
   tail->next = temp ;
   temp->prev = tail ;
   tail = temp ;
  }
}

void insert_at_pos(node * &head ,int data ,int pos,node* &tail){

   if(pos == 1 ){
      insert_at_head(tail ,head ,data);
      return ;
   }
   node * node_to_insert = new node(data);
   int  count = 1;
   node * temp = head ;
   while(count < pos-1){
      count++;
      temp = temp->next ;
   }
   // if we are at last position * * *
   if(temp -> next == NULL){
      insert_at_tail(head ,tail,data);
      return ;
   
   } 
   node_to_insert-> next = temp->next ;
   temp->next->prev = node_to_insert ;
   temp->next = node_to_insert;
    node_to_insert->prev = temp ;

}


// Deleting a node in Doubly Linked List * * * * * 
void delete_node( node* &tail ,  node*  &head ,int pos){
   if(pos == 1){
      node * temp =  head ;
      temp->next->prev = NULL;
      head = temp->next; 
      temp->next = NULL; 

      delete temp ;
   }
   else{
      node* curr = head ;
      node * last = NULL;
      int count = 1;
      while(count<pos){
        
         last = curr ;  
         curr = curr->next ;
         count++;

      }
      if(curr->next== NULL){
         tail = last;
         last->next = curr->next; // NUll value
         curr->prev = NULL;
         delete curr;
         return;
      }
      last->next =curr->next ;
      curr->next->prev = last ;
      curr->next = NULL ;
      curr->prev = NULL ;
    
      delete curr ;

   }
    
}




void Print(node * head)
{
   node* temp = head ;
   while(temp != NULL){
      cout<<temp->data<<" -> ";
      temp =temp->next ;
   }
   cout<<" NULL "<<endl ; 

}

int get_Length(node* head){
   int count = 0;
   node* temp =  head ;
   while(temp!= NULL){
      count++;
      temp = temp->next ;
   }
   return count ;

}
// printing doubly linked list in reverse order * * * 
void Print_rev(node* tail){
   node *  temp =tail ;
   while(temp!=NULL){
     cout<<temp->data<<" -> " ;
     temp = temp->prev ;
   }
   cout<<"NULL"<<endl;
}
int main (){

   node * node1 = new node(10);
   node* head = node1 ;
   node* tail =  node1 ;

   Print(head);
   insert_at_head(tail ,head , 12);
   insert_at_head(tail ,head ,13);
   insert_at_tail(head, tail , 7);
   Print(head);
   cout<<get_Length(head)<<endl;
   insert_at_pos(head , 40  ,3 , tail);
   Print(head);
     cout<<tail-> data<< endl;              // changes are done later as to include empty list cases * * * * *

   insert_at_pos(head , 37  ,1 , tail);
   Print(head);
   insert_at_pos(head , 21 ,7, tail);
   Print(head);

   Print_rev(tail);


   delete_node(tail , head,  7) ;
   Print(head);

   cout<<head->data<<endl;
   cout<<tail-> data;




return 0 ;
}