#include <iostream>
using namespace std;

int main() {    
    int t,ele,count=0,sum=0;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,x;
        cin>>n>>x;
        int arr[n];
        for(int i=0;i<n;i++){
        cin>>ele;
        arr[i]=ele;
        }
        // int sum=arr[0];
        for(int i=0;i<n;i++){
        if(arr[i]%2 ==0 && count<=(4-x)){
            count=count+1;
            sum =sum + arr[i];
            
        }}
        if(sum%2==0){
            cout<<"NO";
        }
        else{
            cout<<"YES";
        }
    }
    return 0;
}