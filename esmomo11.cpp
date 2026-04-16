//nserisci 6 numeri in un array. Stampa i numeri in ordine inverso rispetto all’inserimento.

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <cmath>
using namespace std;

int main(){
    int vet[6];
    int n;

    for(int i=0; i<=5; i++){
        cout << "inserisci 6 numeri"<< endl;
        cin >> n;
        vet[i]=n;
    }

    for(int i=5; i>=0; i--){
        cout << "il vettore è" << vet[i] << endl;
    }
}