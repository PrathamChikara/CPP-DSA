#include <iostream>
using namespace std;

int Binary_func(int arr[],int start,int end,int key){
    if(start>end){
        return false;
    }

   int mid = start + (end -start)/2 ;

   if(arr[mid] == key){
      return true;
   }
   else if(arr[mid] > key){
    return Binary_func(arr , start , mid -1,key);
   }else{
    return Binary_func( arr ,mid + 1,end , key );
   }
}




int main (){

int arr[6] = {1,2,3,4,5,6};
int size = 6;
int key = 0;

int start = 0;
int end = size-1 ;

if(Binary_func(arr,start ,end ,key)){
    cout<<"Present";
}
else{
    cout<< " Not present";
}

return 0 ;
}