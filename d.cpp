#include <iostream>
using namespace std;

int main() {
    int n,m,a,c1=0,c2=0,count1,count2;
    cin>>n>>m>>a;
    while(count1>(-a) || count2>(-a)){
    // for(int i=1;i<=count;i++){
        count1 = n-a;
        count2 = m-a;
        if((count1>=0 || (count1>(-a) && count1<0)) || (count2>=0 || (count2>(-a) && count2<0))){
        c1=c1+1;
        c2=c2+1;
        n=count1;
        m=count2;
    }
    else{
        break;
    }
   
    }
    //     while(count2>(-a)){
    //     // for(int i=1;i<=m;i++){
    //     count2 = m-a;
    //     if(count2>=0 || (count2>(-a) && count2<0)){
    //     c2=c2+1;
    //     m=count2;
    // }
    // else{
    //     break;
    // }
   
    // }

    cout<<(c1*c2);

    return 0;
}