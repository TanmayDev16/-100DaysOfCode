#include <iostream>
#include<string>//string standard libraray
using namespace std;

int main() { 
    int count1=0,count2=0;
    string s1;
    string s2;
    cin>>s1>>s2;

for(int i=0;i<s1.length();i++){

if((int)tolower(s1[i])>(int)tolower(s2[i])){
    cout<<"1";
    break;
}
if((int)tolower(s1[i])<(int)tolower(s2[i])){
    cout<<"-1";
    break;
}
if((int)tolower(s1[i])==(int)tolower(s2[i]) && (i==s1.length()-1)){
    cout<<"0";
    break;
}
else{
    continue;
}

}

    return 0;
}