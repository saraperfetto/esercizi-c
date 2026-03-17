//Genera un numero casuale tra 1 e 100. L’utente ha massimo 5 tentativi per indovinarlo.
//Alla fine stampa: "Hai vinto" oppure "Hai perso, il numero era ..."

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <cmath>

using namespace std;

int main(){
    int tentativi=0;
    int n;
    n=rand()%100+1;
    int numero;
  
    while(tentativi<5){

        cout<<"inserisci il numero";
        cin >> numero;
        if(n==numero){
            cout<<"hai indovinato";
            break;
        }else if(n!=numero){
        cout<<"non hai indovinato";
            }
            tentativi++;
        }
        cout<<n;

    }

