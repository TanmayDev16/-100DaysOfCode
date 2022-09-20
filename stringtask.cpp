#include<iostream>//us standard library functions
#include<string>
#include<algorithm>
using namespace std;
int main(){
        const char* vow[12]={"A", "O", "Y", "E", "U", "I","a", "o", "y", "e", "u", "i"};
        string s;
        cin>>s;
      for(int i=0;i<12;i++){
         for(int j=0;j<s.length();j++){
            if(*vow[i]==s[j]){
                s.erase(remove(s.begin(),s.end(), *vow[i]), s.end());

            }
         }
     
         

        }

       

string s1;
    for (int i=0;i<s.length();i++){
    s1=s1 + ".";//add dot 
    s1=s1+(char)tolower(s[i]);//then string index(general syntax)
    }//not simultaneously
     cout<<(s1);


    return 0;
}