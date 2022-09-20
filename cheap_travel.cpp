//n--total rides
//m--special rides
//a-cost of 1 normal ride
//b-cost of a special ride ticket


//m speial ride-brupee ,1 normal ride - a


// #include<iostream>
// using namespace std;
// int main(){

// int n,m,a,b,cost;
// int i=1;
// cin>>n>>m>>a>>b;
// int temp=n;
// while(temp>m){
   
// temp=temp-m;
// cost=m*b*i + temp*a;

// i++;

//     }
//     cout<<cost;
// return 0;
// }

//n--total rides
//m--special rides
//a-cost of 1 normal ride
//b-cost of a special ride ticket
 
 
//m speial ride-brupee ,1 normal ride - a
// #include<iostream>
// using namespace std;
// int main(){
 
// int n,m,a,b,cost;
// int i=2;
// cin>>n>>m>>a>>b;
// int temp=n-m;
// while(temp>m){
//     if(b>a){
 
// temp=n-m*i;
// cost=i*b + temp*a;
// i++;
//     }
//  if(a>b){

 
//  }   
//     cout<<cost;
//     }
// return 0;
// }


#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,m,a,b;
    scanf("%d %d %d %d",&n,&m,&a,&b);
    printf("%d",min((n/m)*b+min((n%m)*a,b),a*n));
    return 0;
}