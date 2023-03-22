#include <iostream>
using namespace std;


int main (){

int arr[10] = {2,5,7};
// arr stores the address of first element of the array * * *  
cout<< "Address of first element of the array :"<< arr << endl;

cout<< arr[0]<<endl;

// &arr[0] also stores the address of first element of the array * * *  
cout<< "Address of first element of the array :"<< &arr[0] << endl ;
// Printing the starting value * * *
cout<< *arr<<endl;

cout<<*arr + 1<<endl;

cout<<*(arr + 1)<<endl;

int *ptr = &arr[0];

cout<<*(arr) + 1<< endl; // same as line 18 * * *

/* based on the concept of element accesing in array 
  using arr[i] = *(arr + i)
  which is same as
  i[arr] = *(i + arr)
  both means the same thing
*/
cout<<2[arr]<< endl;
// size of Array and pointers
cout<<sizeof(arr)<<endl ;
/* Generally size of a pointer variable is 8 bytes but it is compiler\
dependent so here it is 4 only */
cout<<sizeof(ptr)<<endl;
cout<<sizeof(*ptr)<< endl;
cout<<sizeof(&ptr)<< endl;


cout<<sizeof(&arr)<<endl;


// IMP ERROR can not chabge the address which is mapped in  symbol table
 // arr = arr+1;
 int *p = &arr[0];
 cout<<p<< endl ;
 p = p+1 ;
 cout<<p;








return 0 ;
}