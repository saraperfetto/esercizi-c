//Esercizio4: crea un vettore di 10 stringhe e stampa solo le parole con lunghezza maggiore di 4 caratteri.
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <cmath>
using namespace std;

int main(){
    
    string parola;
    string vet[3]={"gaya","sara","sofia"};
    for(int i=0; i<3; i++)
    {
       
    if(parola.length()>4)
    {
        cout<<vet[i]<<endl;
    }
  }
}