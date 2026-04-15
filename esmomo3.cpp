/*Chiedi all’utente di inserire una parola e conta quante vocali (a, e, i, o, u) ci sono.  Prima fai con una parola e poi fai una frase: 
(se vuoi inserire una frase devi usare getline(cin, frase) perché legge tutta la frase, anche con spazi) e se vuoi convertire da maiuscolo in minuscolo usa la funzione 
tolower()*/

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <cmath>
using namespace std;

int main(){
    string parola;
    int conta=0;
    cout << "inserisci la parola" << endl;
    cin >> parola ;
    for(int i=0; i<parola.length(); i++){
        char lettera=parola[i];
 if (lettera == 'a'||lettera== 'e'||lettera =='i'||lettera =='o'||lettera =='u'){
        conta++;
     }
    }
    
     cout << "le vocali all'interno della parola sono" << conta << endl;
    }