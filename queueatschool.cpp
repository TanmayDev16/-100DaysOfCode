#include <iostream>
using namespace std;
int main() {
    int n,t,i,j;
    cin>>n>>t;
    string s;
    cin>>s;
    // s[0]='A';
    // cout<<s;
    for(int j=0;j<t;j++){
    for(i=0;i<s.length();i++){
        if(s[i]=='B' && s[i+1]=='G'){
            s[i]='G';
            s[i+1]='B';
            i++;
        }  
    }
    }
    cout<<s;
    return 0;
}