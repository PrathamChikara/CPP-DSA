#include <iostream>
#include<vector>
using namespace std;
int main (){
string str ="doct1rs35ange";
vector<char> ch ;
for( int i = 0 ;i<str.length() ; i++){
    if(str[i] >= 'a' && str[i]<= 'z'){
        ch.push_back(str[i]);
    }
    else{
        if(str[i] - '0' > ch.size()-1){
            cout<<"invalid string";
            break ;
    
        }else{
            int num = str[i] - '0';
            ch.push_back(ch[num]);
        }
    }
}
for( int  i =  0 ; i< ch.size(); i++){
    cout<<ch[i];
}

return 0 ;
}