//100 percent correct code just understand the logic 
#include <iostream>
using namespace std;

int main() {
int g;
string s;
cin>>s;
int i,j,k,l,m;
for(i=0;i<s.length();i++){
   if(s[i]=='h'){

for(j=0;j<s.length();j++){
   if(s[j]=='e' && j>i){
      break;
   }
}
for(k=0;k<s.length();k++){
   if(s[k]=='l' && k>j){
      break;
   }
}

for(l=0;l<s.length();l++){
   if(s[l]=='l' && l!=k && l>k){
      break;
   }
}

for(m=0;m<s.length();m++){
   if(s[m]=='o' && m>l){
      break;
   }
}
if((i<j) &&(j<k) &&(k<l) &&(l<m) && (m<s.length())){
   cout<<"YES";
   g=1;
   break;
}
   }
}
if(g!=1){
   cout<<"NO";
}
    return 0;
}