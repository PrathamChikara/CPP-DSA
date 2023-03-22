#include <iostream>
using namespace std; 
string to_Lower(string m){
    int i = 0;
    while(i<m.length()){
        if((m[i]>='a' && m[i]<='z') ||m[i] >=0 && m[i]<=9){
            i++;
        }
        else if ((m[i]>='A' && m[i]<='Z')){
           m[i] = m[i] - 'A' + 'a' ;
           i++; 
        }
        else{
           i++;
        }
    }
    return m;
}
int main(){
   string s;
   cout<<"Enter the string: ";
   cin>>s; 
   cout<< to_Lower(s);
   return 0;
}