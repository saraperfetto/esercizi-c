//Chiedi un numero n e stampa tutti i numeri pari da 2 fino a n 
#include <iostream> 
using namespace std;

int main() {
    int n;
    cout << "Inserisci un numero: ";
    cin >> n;

    
    cout << "Numeri pari da 2 a " << n << ": ";
    for (int i = 2; i <= n; i += 2) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}