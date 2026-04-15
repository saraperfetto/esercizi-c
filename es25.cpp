Esercizio 4:  Costruisci un array di 5 numeri, verifica se tutti i numeri dell’array sono pari

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <cmath>

using namespace std;

int main(){
    int n=5;
    int vet[n];
    int num=0;
    int pari=0;

    for(int i=0; i<n; i++){
        cin >> "dimmi i numeri " >> n ;
        if(num%2==0){
            pari++;
        }
    }
    
