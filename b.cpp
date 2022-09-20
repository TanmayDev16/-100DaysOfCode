
#include <iostream>
using namespace std;

int main() {
 int n;
 
 cin>>n;
 string arr[n];
 for(int i=0;i<n;i++){
    string s;
    cin>>s;
    if(s.length()>10){
        int count = s.length()-2;
        string countstr= to_string(count);
        arr[i]=s[0]+countstr+s[count+1];
    }
    else{
        arr[i]=s;
    }

    
 }
 for(int j=0;j<n;j++){
    cout<<arr[j]<<endl;
 }

 return 0;
}