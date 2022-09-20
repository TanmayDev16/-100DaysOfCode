#include <iostream>
using namespace std;

int main() {
    int n,c=0;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        int s;
        cin>>s;
        arr[i]=s;

    
    
    } 
 
    
    for(int i=0;i<n;i++){
    
            for(int j=i+1;j<n;j++){
            if(arr[i]==4){
            c=c+1;
            arr[i]=-100;
            break;
            }
                if(arr[j]+arr[i]>4){
                continue;
             } 

            if(arr[j]+arr[i]==4){
             c=c+1;
             arr[i]= -100;
             arr[j]= -100;
             break; 
             }
             else{
                c=c+1;
             }
 
             
    }}

    cout<<c;

    return 0;
}