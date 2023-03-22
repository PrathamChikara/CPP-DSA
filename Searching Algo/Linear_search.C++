#include<iostream>
using namespace std;

bool Linear_search(int arr[],int size,int key){

    for(int i = 0;i<size;i++){
        if(arr[i] == key){
            return 1;
        }
    }
    
    return 0;

   

}


int main(){ 
    int key;
    cout<<"Enter the key";
    cin>>key;

    int arr[10] = {1,4,5,2,-2,7,8,9,6,12};

   bool found = Linear_search(arr,10,key);
   if(found){
    cout<<"Element is present in the array";
   } else{
   cout<<"Element is not present in the array";
   }
    return 0;


}