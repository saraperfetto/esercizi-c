//Esercizio 1. Chiedi numeri finché l’utente non inserisce 0, poi calcola somma, media, massimo e minimo.

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <cmath>
using namespace std;

int main(){
    int n;
    int conta=0;
    int somma=0;
    int media;
    int max=0
    int min=9999;
    do{
        cout << "inserisci il numero "<< endl;
        cin >> n;

        conta++;
        somma=somma+n;

        if(n>max){
            max=n;
            
        }
        

    }while(n!=0)

    media=somma/conta;