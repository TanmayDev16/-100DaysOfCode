#include <iostream>
using namespace std;

int main() {
    int x,y,z,n,countx=0,county=0,countz=0;
    cin>>n;
    for(int i=0;i<n;i++){

        cin>>x>>y>>z;
        countx=countx+x;
        county=county+y;
        countz=countz+z;
}
if(countx==0 && county==0 && countz==0){
    cout<<"YES";
}
else{
    cout<<"NO";
}



    return 0;
}