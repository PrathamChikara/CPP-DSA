#include<iostream>
using namespace std;

int main(){
   char a ;
   cout<<"Enter the Alphabet :";
   cin >> a;
   int c = a;
   if (c>=97 && c<=122){
    cout<<" Alphabet is lower case !";

   }
   else if (c>=65 && c<=90){
    cout<<" Alphabet is Upper case !";
   }
   else if (c>=0 && c<=9){
    cout<<" Its is NUmber !";
   }

int n;
cout<<"Enter the number : ";
cin >> n;
int i =1;
while(i<=n){
    cout<< i;
    i++;
}

int sum=0;
int  j =1;
while(j<=n){
    sum=sum+j;
    j++;
}
 cout<<"The sum of n number is : "<<sum; 

int sum1=0;
int  k =2;
while(k<=n){
    sum1=sum1+k;
    k=k+2;
}
 cout<<"The sum of n number is : "<<sum1; 



 return 0;

}