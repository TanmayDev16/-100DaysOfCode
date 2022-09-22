#include <iostream>
#include <algorithm>
#include<string>
using namespace std;
int main() {
    int n,i,j;
    cin>>n;
    int a[n];
    for(int z=0;z<n;z++){
        cin>>a[z];
    }
    for(i=1;i<=n;i++){
         for(j=0;j<n;j++){
            if(a[j]==i){
                cout<<to_string(j+1)+" ";
        }
         }
       
}

    return 0;
}