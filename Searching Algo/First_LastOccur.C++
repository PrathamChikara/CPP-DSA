#include<iostream>
using namespace std;


int first_Occr(int arr[], int size , int key){
      int start = 0; 
      int end = size -1 ;
      int ans = -1 ; 
      int mid = start + (end-start)/2;

      while(start<=end){
        if(arr[mid] == key){
           ans = mid;
           end = mid-1 ; 
        }
        else if(arr[mid]> key){
            end = mid-1 ;
        }
        else{
            start = mid +1;
        }
        mid = start + (end-start)/2;
      }
     
     return ans ;

}



int Last_Occr(int arr[], int size , int key){
      int start = 0; 
      int end = size -1 ;
      int ans = -1 ; 
      int mid = start + (end-start)/2;

      while(start<=end){
        if(arr[mid] == key){
           ans = mid;
           start = mid + 1 ; 
        }
        else if(arr[mid]> key){
            end = mid-1 ;
        }
        else{
            start = mid +1;
        }
        mid = start + (end-start)/2;
      }
     
     return ans ;

}

int main() {
int even [5] = {1,2,3,3,5};
cout<<"First occurence of 3 is: "<<first_Occr(even ,5,3 )<< endl;
cout<<"Last occurence of 3 is: "<<Last_Occr(even ,5,3);



return 0 ;
}