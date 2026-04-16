//Esercizio 2: Leggi numeri finché 0. Stampa l’ultimo numero pari inserito

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <cmath>
using namespace std;

int main(){
    int n;
    int pari;

    do{
        cout<< "inserisci il numero" <<endl;
        cin >> n;
        if(n%2==0&&n!=0){
            pari=n;

        }

    }while(n!=0);

    cout << pari << endl;
}