/* Fai generare al programma un numero casuale tra 1 e 50. L’utente deve indovinarlo, 
e il programma dice “troppo alto” o “troppo basso” finché non indovina 
Funzione per generare un numero random è: 
rand() % 10 + 1 (genera un numero casuale tra 0 e 10, se non metti +1 ti genera un numero da 0 a 9) */

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <cmath>
using namespace std;

int main(){
    srand(time(0));
    int n;
    int numero;
n=rand()%50+1;
    
do{
    cout << " inserisci il numero" << endl;
    cin >> numero;
        if(numero>n){
            cout << "troppo alto"<< endl;
            
        }else{
             cout << "troppo basso"<< endl;
      
        }
   
    }while(n!=numero);

    cout << "hai indovinato" << endl;
}
