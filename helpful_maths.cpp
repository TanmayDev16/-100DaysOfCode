#include <iostream>//use  of standard library function of c++ string
#include<string>
#include<algorithm>//***very important step to use sort function***
using namespace std;

int main() {

    string s;
  
    
    cin>>s;
  //removing plus sign
    s.erase(remove(s.begin(),s.end(),'+'),s.end());
    int n=s.length();
    int arr[n];
    // storing it in an array in integer format
    for(int i=0;i<s.length();i++){
        int temp=((int)s[i]);
        arr[i]=temp;

    
    
    
    }
    //sorting the number array
    sort(arr,arr+n);
 //creating a string and converting the number to string by adding + sign 
    string finale;

    for(int i=0;i<s.length();i++){
        char ch =char(arr[i]);
        finale =finale+ ch ;
        finale = finale + "+";
            
  
    }
//removing last element from finale string
string st = finale.substr(0, finale.size()-1);
    cout<<st;
    return 0;
}