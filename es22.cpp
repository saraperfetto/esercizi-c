// Esercizio 1: Inserisci parole in un vettore finché l’utente digita "STOP".
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <cmath>

using namespace std;

int main(){
    string parola;
    int i=0;


    while(i>=0){
     string vet[i];
    cout << "inserisci parole" << endl;
    cin >> parola;

    if(parola == "stop"){
        break;
    }else{
         vet[i]=parola;
        i++;
       
    }
    }

    for(int a=0; a<i; a++){
        cout << "il vettore è" << vet[a] << endl;
    }
}

    
  