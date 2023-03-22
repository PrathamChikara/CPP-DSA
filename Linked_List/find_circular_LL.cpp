#include <iostream>
#include <bits/stdc++.h>
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
bool is_circular(node *  tail){
    if(tail == NULL){
        return true ;
    }
    node * temp = tail;
    while(temp->next != NULL && temp->next != tail){
        temp =temp-> next;
    }
    if(temp->next == NULL){
        return false ;
    }
    if(temp->next == tail){
        return true ;
    }
}

bool detect_Loop(node * head){
    
    if(head == NULL){
        return false;
    
    }
    map<node* , bool> visited ;

    node *  temp = head; 

    while(temp != NULL){

        if(visited[temp] == true){
           return true ;
        
        }
        visited[temp] =  true ;
        temp = temp-> next ;
        

    } 
    return false ;
}

 node *  floyd_detect(node *  head){
   if(head == NULL){
	   return NULL;
   }
   if(head->next == NULL){
	   return  NULL ;
	
   }
   node *  slow = head ;
   node *  fast = head ;
  
  while(slow!= NULL && fast!= NULL){
	  fast = fast->next ;
	  if( fast!= NULL){
		  fast = fast->next ;
	  }
	  slow = slow-> next;
	  if(slow == fast){
		  return slow;
		
	  }
  }
  return NULL;

}


node * get_start_loop(node *  head){
    if(head == NULL){
        return NULL;
    }


    node * temp = floyd_detect(head);
    
    node * slow = head ;
     
     while(slow != temp){
        slow = slow-> next ;
        temp = temp->next ;
    
     }

     return slow;
    
}





int main (){
   node *  tail = NULL ;

   insert_ele(tail , 4 ,5);
   insert_ele(tail , 5 ,3);
   insert_ele(tail , 3 ,8);
   insert_ele(tail , 8 ,9);

   Print(tail);

   cout<<is_circular(tail)<<endl;

   cout<<detect_Loop(tail)<<endl;


   cout<<floyd_detect(tail) <<endl;


   node * loop_node = get_start_loop(tail);

   cout<<loop_node->data ;






return 0 ;
}