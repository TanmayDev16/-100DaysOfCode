// #include <iostream>
// #include <vector>
// #include<algorithm>
// using namespace std;
// //general template for using vector
// int main() {
//     int n,x,y; 
//     cin>>n; // taking size of vector from user
//     int a;
//     vector<int> v;
    
//      // we can also mention size here like
//      // vector<int> v(n);
//     for(int i=0 ; i<n ; i++)
//     {
//         cin>>a;
//         v.push_back(a);
//     }
//     vector<int> v1=v;
//     sort(v1.begin(), v1.end());

//     int count=0;
//     if(v==v1){
//         cout<<0;
//     }
//     else{
//     for(int j=0;j<v.size();j++){
//          x= v[n-1];
//          v.pop_back();
//          v.insert(v.begin(), x);
//         if(v != v1){  
//             count++;
//         }
//     }
        
//      }  
           
     
//     if(count>v.size()-1){
//         cout<<-1;
//     }
//     if(count != 0 && count<=v.size()-1){
//         cout<<count-1;
//     }
    

   
   


//     return 0;
// }



// ABOVE CODE GIVING TLE ERROR
