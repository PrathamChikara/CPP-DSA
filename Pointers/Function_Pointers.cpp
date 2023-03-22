#include <iostream>
using namespace std;



int get_sum(int *arr , int n){
  int sum = 0 ;
  for(int i = 0;i<n ; i++){
    sum +=arr[i];
  }
  return sum ;
}

void Print_pointer(int *p){
    cout<<*p ;
}
void Update(int *p){
  p = p+1;
  cout<<"After Address of the pointer :"<<p ;

}

int main (){

int value = 5;
int *ptr = &value;
Print_pointer(ptr);
cout<< endl;

cout<< "Before Address of the pointer :"<< ptr << endl;
Update(ptr); //Pointer follows pass by value approach * * *
//IMPORTANT * *  * But you can change the value in func by*p = *p + 1  * * * 


int arr[6] = {1,2,3,4,5,8};
// Passing part of the ARRAY  * * * * * * * * * * * 
cout<<endl<<get_sum(arr+3,3);
return 0 ;
}