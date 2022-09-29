#include <iostream>
#include<algorithm>
#include <iomanip>//for setprecision function
using namespace std;
int main() {
    int n,l;
    cin>>n>>l;
    int arr[n];
    for(int j=0;j<n;j++){
        cin>>arr[j];
    }
    sort(arr,arr+n);


int d = 2* max(arr[0],l-arr[n-1]);
 for(int i=1;i<(n);i++){
    d=max(d,arr[i]-arr[i-1]);
    
 }cout<<fixed<<setprecision(9)<<(double)d/2;
    // double d ;
    
    // cout << fixed;
    // cout << setprecision(10);
    // // cout << d;



  
    
    
    
    
    // int i;
    // int a,b,c,x,y,z;
    // for(d=0;d<l;d++){
    //     for(i=0;i<(n);i++){
    //     // cout<<arr[i];
    //     if((i==0) && (arr[i]-d)<=0 && (arr[i]+d)>=(arr[i+1]-d)){
    //         x=a;
    //     }
     
    //     if((i>0)&& (i<(n-1)) && (arr[i]-d)<=(arr[i-1]+d) && (arr[i]+d)>=(arr[i+1]-d)){
 
    //         y=b;
    //     }
    //     if((i==(n-1)) && (arr[i]-d)<=(arr[i-1]+d) && (arr[i]+d)>=l){
   
    //         z=c;
    //     }
    // }
    // if(x==a && y==b && z==c){
    //     cout<<d;
    //     break;
    // }

    // }
    return 0;
}