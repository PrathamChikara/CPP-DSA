#include <iostream>
using namespace std;

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

Insert_at_Head(head ,12);
Insert_at_Head(head ,15);

Insert_at_tail(tail ,20);
Insert_at_tail(tail , 2);
Insert_at_pos(tail,3 ,7 ,head);
Insert_at_pos(tail,7,55 ,head);

print_LL(head);

cout<<"Head "<< head->data<< endl ;
cout<<"Tail "<< tail->data<< endl ;

delete_node(7,head,tail);

print_LL(head);

cout<<"Head "<< head->data<< endl ;
cout<<"Tail "<< tail->data<< endl ;


return 0 ;
}