#include <iostream>
using namespace std;

void Print_Array(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i]<<"  ";
    }
}


int Binary_Search(int arr[] , int size , int key){

    int start = 0;
    int end = size - 1;
    int mid =  start + (end - start)/2; //   why used this? Logic in Copy(Binary Search)
    

    while(start<=end){
       
        if(arr[mid] == key){
            return mid;
        }

        else if(key>arr[mid]){
            start = mid+1;
        }

        else{
            end = mid-1;
        }

        int mid =  start + (end - start)/2;
    }

   return -1 ; 
}

int main(){
  int size ;
  cout<< "Enter the size of array :";
  cin>>size;
  int key ;
  cout<< "Enter the key:";
  cin>>key;

  int arr[size];
  for( int i = 0 ; i<size ;i++){
    cin>>arr[i];
  }

  cout <<"Original Array :"<<endl;
  Print_Array(arr , size);


  cout<<endl<<"Element found at index : "<<Binary_Search(arr,size,key);



} 