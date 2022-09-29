#include <iostream>
#include<algorithm>
using namespace std;
int main() {
    int n,t=1;
    cin>>n;
    int a[n];
    int b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int z=0;z<n;z++){
        b[z]=a[z];
    }
    //  for(int z=0;z<n;z++){
    //     cout<<b[z];
    // }
sort(b,b+n);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            reverse(a+i,a+(j+1));
            cout<<a[i];
            // for(int k=0;k<n;k++){
            //     if(a[k]!=b[k]){
            //         cout<<"no";
            //         break;
            //     }
            //     else{
            //         // cout<<"no";
            //         // break;
            //         t++;
            //     }
            // }
            //     if(t==n){
            //         cout<<"yes";
            //         cout<<a[i]<<a[j];
            //         break;
            //     }
            
        
    }
  
    }


    return 0;
}