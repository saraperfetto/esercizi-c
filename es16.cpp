//Chiedi un numero all’utente e stampa: "Radice quadrata = ..." se il numero è positivo , "Numero non valido" se è negativo.

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <cmath>

using namespace std;

int main(){
    int n;
    cout <<"inserisci il numero" << endl;
    cin >> n;
    if(n>0){
    cout<< sqrt(n) << endl;
    }else{
        cout << "numero non valido" << endl;
    }
}
