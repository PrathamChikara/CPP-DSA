#include <iostream>
using namespace std;



//   Approach 1 using 2 Loops T.C = O(N^2)    S.C =  O(1)  * * * * * * * * * 

class node {
    public:
    int data ;
    node* next ;

    node(int data){
        this->data = data ;
        this->next = NULL ;

    }

    // ~node(){
    //   int value = this->data;
    //   if(this->next != NULL){
    //     delete next;
    //     this->next =NULL; 
    //   }
    //  cout<<"The value of deleted node is : "<<value<< endl;
    // }

};
void Insert_at_Head(node * &head , int data){
    node* temp = new node(data) ;
    temp->next = head ;
    head = temp ;

}
void Insert_at_tail(node* &tail,int data){
    node* temp =  new node(data);
    tail->next = temp ;
    tail = temp ;
}

void Insert_at_pos(node * &tail,int pos ,int data ,node * &head){
 // Inserting at start * * *
    if(pos == 1){
     Insert_at_Head(head ,data);
     return ;
    }


    node* temp = head ;
    int count = 1;
    while (count < pos-1){
        temp = temp->next;
        count++;
    }
     // Insert at end * * *
     if(temp -> next == NULL){
        Insert_at_tail(tail , data) ;
        return ; 
     }

    // Creating a new node for Data * * *
    node * nodeToInsert = new node(data);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

void delete_node(int pos , node* &head ,node * &tail){
    if(pos == 1){
        // deleting first node  * * *
        node * temp = head;
        head = head-> next;
     // Deleting  the node and freeing the memory * * *
        temp->next=NULL ;
        delete temp ;

    }else{
        // Deleting middle or last element * * * 
        node * curr = head ;
        node * prev = NULL ;
        int count = 1 ;
        while(count < pos){
            prev = curr ;
            curr = curr->next ;
            count++;
        }
        if(curr->next == NULL){
            tail = prev ;
        }

        prev->next = curr->next ;
        
        curr->next = NULL ;
        delete curr ;
    }
}
node *removeDuplicates(node *head)
{
    if( head ==NULL){
        return NULL;

    }
    node *  curr = head ;
    node *  prev =  head ;
    while(curr !=NULL){
        node* temp = curr->next ;
       while(temp !=NULL){

           if(temp->data == curr->data){
              prev->next = temp-> next ;
              node* next_node = temp->next;
              delete(temp);
              temp = next_node;

           }else{
               prev = temp ;
               temp = temp->next;
           }

       }
       curr =  curr->next ;

    }

    return head ;

}


void print_LL(node* &head){
   node* temp = head;
   while(temp!= NULL){
    cout<<temp->data<<"->";
    temp = temp->next ;
    
   }
   cout<<"NULL"<<endl;
}

int main (){
node* node1 = new node(4);
node* head = node1 ;
node* tail =  node1 ;

print_LL(head);

Insert_at_tail(tail ,2);
Insert_at_tail(tail ,5);
Insert_at_tail(tail ,4);
Insert_at_tail(tail ,2);
Insert_at_tail(tail ,2);


print_LL(head);

node* temp = removeDuplicates(head);

print_LL(head);


return 0 ;
}