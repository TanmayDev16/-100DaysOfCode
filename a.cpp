#include <iostream>
using namespace std;

int main() {    
    int w,y,z;

    
    cin >> w;
    for(int x=1;x<w;x++){
        y=w-x;
        if(x%2==0 && y%2==0){
            // cout<<x<<" "<<y<<endl;
            z=1;
            cout<<"YES";
            break;
            
         }
         else{
            continue;  
         }
        
         }
    
     if (z!=1){
            cout<<"NO";
     }
    return 0;
}