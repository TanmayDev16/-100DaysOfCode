#include<iostream>
using namespace std;
int main(){
    int n,count=0;
    cin>>n;
    for(int i=0;i<n;i++){
        int x,y,z;
        cin>>x;
        cin>>y;
        cin>>z;
        int sum =x+y+z;
        if(sum ==2 || sum==3){
            count = count+1;

        }
    }
    cout<<count;




    return 0;
}