//Esercizio 4:  Costruisci un array di 5 numeri, verifica se tutti i numeri dell’array sono pari

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <cmath>
using namespace std;

int main(){
    int n;
    int vet[5];
    int conta; 

    for(int i=0; i<5; i++){
        cout << "inserisci i numeri" << endl;
        cin >> n;
        if(n%2==0){
            conta++;
        }
    }
    

    
        if(conta=vet[5]){
            cout<< "tutti i numeri dell 'array sono pari"<< endl;
        }else{
            cout << "i numeri nn osno tutti pari";
        }
    
}



