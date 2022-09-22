#include <iostream>
using namespace std;

int main()
{
    int n,g;
    cin>>n;
    int arr[14] ={4,7,44,47,74,77,444,447,474,477,747,744,774,777};
    for(int i=0;i<14;i++){
        if(n%(arr[i])==0){
            cout<<"YES";
            g=1;
            break;
        }
       
    }
    if(g!=1){
        cout<<"NO";
    }

    return 0;
}