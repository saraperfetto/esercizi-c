//3. Chiedi un numero all’utente e conta quanti numeri sono inseriti e fermati quando l'utente decide di fermarsi.

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <cmath>
using namespace std;

int main(){
    int n;
    int conta=0;
    string risposta;
    int somma=0;
    int media;


    do{
       cout << "inserisci il numero" << endl;
        cin >> n;
        conta++;
        cout << "vuoi continuare?" << endl;
        cin >> risposta ;
        somma=somma+n;

    }while(risposta=="si");

    media= somma/conta;

    cout << "il conta è " << conta << "la media è " << media << "la somma è" << somma;
}