#include <iostream>
using namespace std;
int main() {
  int n,m;
  cin>>n>>m;
  int arr[m];
//   for(int j=1;j<=n;j++){
//     for(int i=0;i<m;i++){
//      if(arr[i]!=0){
     
//         arr[i]=j;
//         j=n-j;
//      }
//     }
//   }
//   for(int j=0;j<m;j++){
//     cout<<arr[j];
//   }



//for min
int z=n/m;
cout<<z;
//for max
int max=n-(m-1);
// int fac(int a){
//     return a*fac(a-1);
// }
int maxfinal=(max)*(max-1)/2;
cout<<maxfinal;
    return 0;
}