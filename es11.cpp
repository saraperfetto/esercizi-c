/* Fai generare al programma un numero casuale tra 1 e 50. L’utente deve indovinarlo, e il programma dice “troppo alto” o “troppo basso” finché non indovina 
Funzione per generare un numero random è:  rand() % 10 + 1 (genera un numero casuale tra 0 e 10, se non metti +1 ti genera un numero da 0 a 9) 
Aggiungi le libreria della funzione random: #include <cstdlib> , #include <ctime>
 Inizializza il generatore di numeri casuali altrimenti ti genera sempre lo stesso numero:  il codice è : srand(time(0));*/

#include<string>
#include <iostream> 
using namespace std;

int main() {
    int n;  
    int numcasuale;
    cout<< "inserisci un numero da 1 a 50";
    cin>> n;            

    
    numcasuale= rand() % 50 + 1;

    while(n!=numcasuale){
        if(n>numcasuale){
            cout<< "troppo alto" << endl;
        }
        else if(n<numcasuale){
            cout<< "troppo basso" << endl;
        }
        cout<< "inserisci un numero da 1 a 50";
        cin>> n; 
    }
    cout<< "hai indovinato il numero" << endl;
    return 0;
}   

    

