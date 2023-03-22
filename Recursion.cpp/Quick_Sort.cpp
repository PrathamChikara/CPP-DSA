#include <iostream>
using namespace std;


int Partition(int arr[] , int start ,int end){
  int count = 0;
  int pivot = arr[start];
  for( int i = start +1; i<=end ; i++){
     if(arr[i]<=pivot){
        count++; 
    }
  }
  int pivotIndex = start + count;
  swap(arr[start],arr[pivotIndex]); 


 int i = start; 
 int j = end ; 

 while( i< pivotIndex && j > pivotIndex){
   while(arr[i] <= pivot){
    i++;
   }
   while(arr[j]> pivot){
    j--;
   }
   if(i< pivotIndex && j > pivotIndex){
    swap(arr[i],arr[j]);
     i++;
     j--;
   }
}
 return pivotIndex;
}

void  quick_sort( int arr[], int start , int end)
{   
    // Base condition
    if( start>=end){
        return ;  
    }
    int p  = Partition(arr, start,end);

    quick_sort(arr,start ,p-1);

    quick_sort(arr, p+1 , end);

}



int main (){
int arr [6] = {3,4,7,1,2,9};
int size = 6;

quick_sort(arr,0,size-1);

for( int i = 0;i<size ;i++){
    cout<<arr[i]<< " "; 
}

return 0 ;
}