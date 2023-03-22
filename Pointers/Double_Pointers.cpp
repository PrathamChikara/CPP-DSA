#include <iostream>

void Update(int **p){
    //p = p+1;

    //will it change anything -->  NO
    //  *p = *p+1 ; 
    //will it change anything -->  YES 
    
    **p = **p + 1;

    // will it change anything -->  YES
}
using namespace std;
int main (){
int i = 5 ;
int* ptr = &i;
int** ptr2 = &ptr;

cout<<ptr<<endl;
cout<<*ptr<< endl;
cout<<*ptr2<< endl;

// Different methods to print value at i  * * *
cout<<i<<endl;
cout<<*ptr<<endl;
cout<<**ptr2<<endl;


// Values through Update function * * * 
cout<<"Values Before update"<<endl;
cout<<i<<endl;
cout<<ptr<<endl;
cout<<ptr2<<endl;

Update(ptr2);

cout<<"Values After update"<< endl;
cout<<i<<endl;
cout<<ptr<<endl;
cout<<ptr2<<endl;

return 0 ;
}