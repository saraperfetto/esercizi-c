//1 .Chiedi all’utente quanti numeri vuole inserire (n) e calcola la loro media usando un array  

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <cmath>

using namespace std;

int main(){

    int quantita;
    int n;
    int somma=0;
    int media;
    cout << "quanti numeri vuoi inserire nell ' array "<<endl;
    cin >> quantita;

    int vet[quantita];
    for( int i=0; i<quantita; i++){

        cout << "inserisci il numero nell'array" << endl;
        cin >> n;

        somma=somma+n;
    }


    media=somma/quantita;
    cout << "la media è" << media << endl;
}