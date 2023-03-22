#include<iostream>
using namespace std;



void Print_Array(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
    }
}
// method 2 with a single variable
void Swap_alt(int arr[] , int size ){
    for(int i = 0 ; i < size ; i+=2){
        if(i+1 < size){
            swap(arr[i] , arr[i+1]); 
        }
    }
}


void swap_alternate(int arr[] , int size){
    int i =0;
    int j =1;
    while( j<=size-1){
       int temp = arr[i];
       arr[i] = arr[j];
       arr[j] = temp;
       i+=2;
       j+=2;
    }

}




int  main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int arr[size];
 
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Original Array" << endl;

    Print_Array(arr, size);
    cout << endl
         << "New Reversed Array" << endl;
    //swap_alternate(arr,size);
    Swap_alt(arr,size);
    Print_Array(arr, size);

    return 0;
}




