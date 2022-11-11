#include <iostream>
using namespace std;

int main(){
  float a=0;
  float b=0;
  float c=0;

  cin >> a >> b >> c;

  float quadrato=a*a;
  float triangolo=(a*b)/2;
  float rettangolo=a*b;
  float trapezio=((a+b)*c)/2;

  cout << triangolo << endl;
  cout << quadrato << endl;
  cout << rettangolo << endl;
  cout << trapezio << endl;
  
  return 0;
}
