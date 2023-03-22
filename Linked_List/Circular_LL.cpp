#include <iostream>
using namespace std;

class node {
    
public:
int data ;
node * next ;
 
 node(int data){
    this->data = data ;
    this->next = NULL;

 }
 ~node(){
    int value = this->data ;
    if(next!=NULL){
        delete next ;
        next =  NULL ;
    
    }
    cout<<"Memory free is : "<<value<<endl ;

 }

};

void insert_ele(node * &tail , int element , int data){
    
     // The list is empty * * *
    if(tail == NULL){
       
        node* temp = new node(data);
        temp->next = temp ;
        tail = temp ;
    }else{
        // Assuming the element is surely present in the list * * *
        node* curr = tail;
        while(curr->data != element){
            curr = curr->next ;

        }
       // element found ----- and curr node represents it * * * * 
        node *  node_to_insert = new node(data);
        node_to_insert->next = curr->next;
        curr->next =node_to_insert;
    }


}

void Delete_node(node * &tail ,int value){
    // List is Empty * * *
    if(tail == NULL){
        cout<<"List is empty Nothing to Delete"<<endl;
        return ;   
    }
    // Assuming the value surely exist in the linked list * * *
    node* prev = tail;
    node* curr = prev->next ;

    while(curr->data!=value){
       prev = curr ;
       curr =curr->next ;
    }
    //If 1 node exist only in that case even prev cannot be pointed so to handele it * * *
    if(curr == prev){
        tail = NULL ;
    }
    else if(curr == tail){
      tail =  prev; // if we delete the node with holds the tail pointer * * *
    }
    prev->next =curr->next ;
    curr->next =  NULL ;

    delete curr ;


}


void Print(node * tail){
    node * temp = tail ;
    // empty list * * *
    if(tail == NULL){
    cout<<"List is Empty "<< endl;
    return;
    }
    do{// to print the single node also we use so while loop otherwise you cannot print the single node * * *
        cout<<tail->data<<" -> " ;
        tail = tail->next;
    }while(tail!=temp);

    cout<<endl;
}






int main (){
   node *  tail = NULL ;

   insert_ele(tail , 5 ,2); // checking to delete 1 Node * * *


   Delete_node(tail , 4 );


   insert_ele(tail , 5 ,2);
   Print(tail);
   cout<< tail<< endl;

   insert_ele(tail , 2 ,4);
   Print(tail);
   cout<< tail<< endl;


   insert_ele(tail , 4 ,5);
   Print(tail);
   cout<< tail<< endl;

   insert_ele(tail , 2 ,7);
   Print(tail);
   cout<< tail<< endl;


   Delete_node(tail , 2);
   Print(tail);

return 0 ;
}