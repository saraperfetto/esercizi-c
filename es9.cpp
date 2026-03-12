/*Sono dati N biglietti. Per ogni biglietto si conoscono: 
prezzo base, tipo di cliente. Applicare lo sconto: Studente → 30% , Adulto → 5% , Over 65 → 40%. Stampare il totale incassato.*/
#include<string>
#include <iostream> 
using namespace std;

int main() {
    int n;
    int prezzobase=10;
    string tipocliente;
    double totale;
    double totincassato;    

    cout<< "inserisci il numero di biglietti";
    cin>> n;
    cout<< "il n di biglietti è " << n << endl;

    while(n>0){

    if( tipocliente==("studente")){
        totale=prezzobase-prezzobase*0.30;
        cout<< "il prezzo scontato è " << totale << endl;
    }
    else if( tipocliente==("adulto")){
        totale=prezzobase-prezzobase*0.05;
         cout<< "il prezzo scontato è " << totale << endl;
    }
     else if( tipocliente==("over 65")){
        totale=prezzobase-prezzobase*0.40;
         cout<< "il prezzo scontato è " << totale << endl;
    }
    n--;
}
totincassato=totincassato+totale;
cout<< "il totale incassato è " << totincassato << endl;
    return 0;
}
