#include <bits/stdc++.h> 
using namespace std;


bool palindrome(string s , int i){
    if(i > (s.length()-i-1)){
        return true;
    }
    
    if(s[i] != s[s.length()-i-1]){
        return false ;
    }
    i++;
   return palindrome(s , i);
}


int main (){

string str ="BookkaoB";
if(palindrome(str ,0 )){
    cout<< "string is a palindrome";
}
else{
    cout<< "Not palindrome";
}
return 0 ;
}