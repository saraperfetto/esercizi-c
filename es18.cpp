//2. Chiedi all’utente di inserire n numeri in un array e trova il più piccolo

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <cmath>

using namespace std;

int main(){
    int n;
    int min=999;
    int lunghezza;

    cout << "inserisci la lunghezza dell array" << endl;
    cin >> lunghezza;

    int vet[lunghezza];
    for (int i=0; i<lunghezza; i++){
        cout <<"  inserisci i numeri nell ' array " << endl;
        cin >> n;
        if (n<min){
            min=n;
        }
    }
    cout <<" il numero minore è" << min << endl;
}
