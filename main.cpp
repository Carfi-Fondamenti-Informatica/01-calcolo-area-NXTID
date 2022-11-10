#include <iostream>
using namespace std;

int main(){
//Qui vanno definite le variabili
  float a=0;
  float b=0;
  float c=0;
  float quadrato=0;
  float trapezio=0;
  float rettangolo=0;
  float triangolo=0;

  cin >> a >> b >> c;

//Qui va scritto il codice per eseguire i calcoli richiesti
  quadrato=a*a;
  triangolo=(a*b)/2;
  rettangolo=a*b;
  trapezio=((a+b)*c)/2;

  cout<<quadrato;
  cout<<rettangolo;
  cout<<triangolo;
  cout<<trapezio;

  return 0;
}
