#include <iostream>
using namespace std;


void merge( int *arr , int start ,int end){
    int mid = start +(end -start)/2;
     

    int len1 = mid - start +1 ;
    int len2 = end -mid ;

     
    int* first = new int [len1];
    int* second = new int[len2];
     
    int mainindex = start; 
    for( int i = 0 ; i<len1;  i++){
        first[i] = arr[mainindex];
        mainindex++;
    }
    mainindex = mid + 1;
    for(int i = 0 ;i<len2 ;i++){
        second[i] = arr[mainindex];
        mainindex++;
    }

    int index1 = 0;
    int index2=  0;
    mainindex=  start;

    while(index1 < len1 && index2 < len2){
        if(first[index1] < second[index2]){
            arr[mainindex] = first[index1];
            index1++;
            mainindex++;
        }else{
            arr[mainindex] =second[index2];
            index2++;
            mainindex++;
        }
    }
    while(index1 < len1){
        arr[mainindex] = first[index1];
        mainindex++;
        index1++;

    }
    while(index2 < len2){
        arr[mainindex] = second[index2];
        mainindex++;
        index2++;
        
    }
    delete []first;
    delete []second;
}


void merge_sort(int* arr , int start ,int end){
    
    if( start>= end){
        return ;
    }

    int mid = start + (end -start)/2;
     // left part
     merge_sort(arr,start, mid);
     // Right part
     merge_sort(arr , mid+1 ,end);
     
     merge(arr ,start,end);

}




int main (){
int arr[6] = {2,7,9,3,1,5};
int size = 6;

merge_sort(arr , 0 ,size-1);
for(int i = 0 ; i<size ; i++){
    cout<< arr[i]<<" ";
}

return 0 ;
}