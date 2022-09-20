#include <iostream>
using namespace std;

int main() {
int t,n;
cin>>t;
for(int i=0;i<t;i++){
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        arr[i]=a;

    }
    int s=arr[0];
    int e=arr[n-1];
    if(arr[0]>arr[1]){
        int narr[n-1];
        for(int i=1;i<n;i++){
        narr[i]=arr[i-1];

    }
for(int i=0;i<n;i++){
    cout<<narr[i];
}
}

}

    return 0;
}