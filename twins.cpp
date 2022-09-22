#include <iostream>
#include<algorithm>
using namespace std;

int main() { 
int n,total=0,count=0,j=0;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    int cv;
    cin>>cv;
    arr[i]=cv;
}
sort(arr, arr + n, greater<int>());
for(int i=0;i<n;i++){
    total+= arr[i];
}
for(j=0;j<n;j++){
    count+=arr[j];
    if(count>(total-count)){
        break;
    }
    }
    cout<<(j+1);
    return 0;
}