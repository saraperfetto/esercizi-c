//Genera un vettore di 10 numeri casuali e calcola la somma degli elementi nelle posizioni pari

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <cmath>
using namespace std;

int main(){
        srand(time(0));
    int n=10;
    int vet[n];
    int somma=0;
    int pari;
    
    for(int i=0; i<n; i++){
        vet[i]=rand()%100+1;
        if(i%2==0){
            pari=vet[i];
            somma=somma+pari;
        }
    }

   cout << "la somma è" << somma << endl; 
}