//Esercizio 1. Chiedi numeri finché l’utente non inserisce 0, poi calcola somma, media, massimo e minimo.
#include <iostream>
#include <string>
using namespace std;



int main() {
    int n; 
int somma=0;
double media;
double ma=0;
int min=999999;
   cout<< "inserisci un numero, se vuoi smettere inserisci 0";
        cin>> n; 

    while(n!=0){
        somma=somma+n;
        

        if(n>max){
            max=n;
        }else{
            min=n;
        }


    }
    media=somma/n;
    cout<< "la somma è " << somma << endl;
    cout<< "la media è " << media << endl;
    cout<< "il max è " << max << endl;
    cout<< "il min è " << min << endl;
   
   

    return 0;
}

