#include <iostream>//use  of stoi function 
#include<string>
using namespace std;

int main() {

    string s;
  
    
    cin>>s;
    // int n= (s.length()+1)/2;
    // int arr[n];
    
    s.erase(remove(s.begin(),s.end(),'+'),s.end());

    // cout<<s; 
    int n=s.length();
    int arr[n];
    for(int i=0;i<s.length();i++){
        int temp=((int)s[i]);
        arr[i]=temp;

    
    
    
    }
    sort(arr,arr+n);
 
    string finale;

    for(int i=0;i<s.length();i++){
        char ch =(char)arr[0];
        finale =finale+ ch ;
        finale = finale + "+";
            
  
    }

    cout<<arr[0];
    return 0;
}