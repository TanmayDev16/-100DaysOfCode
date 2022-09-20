#include <iostream>
using namespace std;

int main() {
 string s;
 int countl=0,a;
 cin>>s;
 for(int i=0;i<s.length();i++){
    if((s[i]=='h')|| s[i]=='e' || s[i]=='o')){
      i++;

    }
    if(s[i]=='l'){
        countl=countl+1;
    }
    else{
        continue;
    }
 }
 if(a==1 && countl>=2){
    cout<<"YES";
 }
 else{
    cout<<"NO";
 }


    return 0;
}