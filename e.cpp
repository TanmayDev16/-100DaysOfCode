// #include <iostream>
// using namespace std;

// int main() {
//     int a,n,k,c=0;
//     cin>>n>>k;
//     int arr[n+1];
//     for(int i=1;i<=n;i++){
//         cin>>a;
//         arr[i-1]=a;
//         if(a>k && a>0){
//             c=c+1;

//         }
//     }
        

//         for(int i=0;i<(n);i++){
//          if(arr[i]==a && arr[i]>0 && n!=1){
//             c=c+1;
//         }
//         else{
//             break;
//         }
//         }
    
    

//     cout<<c;






//     return 0;
// }
#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int a;
    for (int i = 0; i < k; ++i)
    {
        cin >> a;
        if (a == 0)
        {
            cout << i << endl;
            return 0;
        }
    }

    int b;
    for (int i = k; i < n; i++)
    {
        cin >> b;
        if (b != a)
        {
            cout << i << endl;
            return 0;
        }
    }

    cout << n << endl;
    return 0;
}