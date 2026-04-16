//Esercizio 3:  Crea due array di 4 elementi ciascuno. Somma elemento per elemento e stampa il risultato in un terzo array.

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <cmath>
using namespace std;

int main(){
    int n1;
    int n2;
    int vet1[4];
    int vet2[4];
    int vetsomma[4];

    for(int i=0; i<4; i++){
        cout << "dimmi i 4 numeri di vet 1 "  << endl;
        cin >> n1 ;
        vet1[i]=n1;
    }
    
    for(int i=0; i<4; i++){
        cout << "dimmi i 4 numeri di vet 2" << endl;
        cin >> n2 ;
        vet2[i]=n2;
    }

    for(int i=0; i<4; i++){
        vetsomma[i]=vet1[i]+vet2[i];
        cout <<"il vettore con le somme è" << vetsomma[i] << endl;
    }}

