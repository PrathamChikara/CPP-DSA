#include <iostream>
using namespace std;
int main (){

int arr[5] ={1,2,3,4,5};
char ch[6] = "abcde";

// IMPORTANT  * * * * * * * 
cout<< arr<<endl;


cout<<ch<<endl; // print the entire content because implementaion of cout is different in case of char and int arrays

char *c = &ch[0];
cout<< c<< endl;
// print the entire content because implementaion of cout is different in case of char and int arrays

// IMP CONCEPT * * * *
//will print any values until it finds NULL character * * * 
char temp = 'z';
char *p = &temp ;
cout<< p<< endl;






return 0 ;
}