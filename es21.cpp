//5. Genera un vettore di 12 numeri casuali, chiedi un numero all’utente e stampa la posizione se esiste (Esercizi array in C++)
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <cmath>

using namespace std;

int main(){
int n=12;
int vet[n];
int x;
int i=0;

int numero;
cout << "inserisci un numero" << endl;
cin >> numero;

srand(time(0));
for (int i=0; i<n; i++){
    vet[i]=rand()%12+1;
if(numero==vet[i]){
    x=i;
    cout << "il numero " << numero << "  è nella posizione " << x << endl;
   
}
}
cout << "il vettore è" << endl;
for (int i=0; i<n; i++){
cout << vet[i] << " ";
}}


