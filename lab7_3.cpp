#include<iostream>

using namespace std;

 int adiff(int x ,int y ){
    int c = x-y ;
    if( c < 0 ){
      c = c*-1 ;
    }
    c = c%360 ;
    if ( c > 180){
      c = 360 - c ;
    }
  return c ;
 }


int main(){
  cout << adiff(180,270) << "\n";
  
  cout << adiff(210,45) << "\n";

  cout << adiff(0,360)<< "\n";

  cout << adiff(10,350)<< "\n";

  cout << adiff(95,260)<< "\n";

  cout << adiff(90,-90)<< "\n";

  cout << adiff(1000,280)<< "\n";

  cout << adiff(-359,-360)<< "\n";

}
