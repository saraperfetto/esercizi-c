//Chiedi all’utente il prezzo originale e la percentuale di sconto. 
//Calcola il prezzo finale e stampalo. Ripeti finché l’utente non inserisce 0 come prezzo.
#include <iostream>
#include <string>
using namespace std;

int main(){
    int prezzoori; 
    int percentuale;
    int prezzofin;

    do{

    cout<< "inserisci il prezzo originale";
    cin>> prezzoori;

    cout<< "inserisci la percentuale di sconto";
    cin>> percentuale;

    prezzofin=prezzoori-(prezzoori*percentuale);

    cout<< "il prezzo finale è " << prezzofin << endl;

    }while(prezzoori!=0);


    }