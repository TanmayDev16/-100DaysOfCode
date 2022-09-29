#include <iostream>

#include <cmath>

using namespace std;
int main() {
  int r,x,y,x1,y1;
  cin>>r>>x>>y>>x1>>y1;

  double distance=sqrt(pow(x1-x,2)+pow(y1-y,2));
 int min=(int)ceil((distance * 0.5 )/r);
  cout<<min;




    return 0;
}