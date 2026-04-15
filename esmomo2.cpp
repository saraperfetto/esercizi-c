// Chiedi all’utente un numero n e calcola n! Esempio: 5!=5*4*3*2*1=120

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <cmath>
using namespace std;

int main(){
int n;
int prodotto=1;
cout << "dimmi il numero"<<endl;
cin >> n ;

for(int i=1; i<=n; i++){
    prodotto=prodotto*i;
    
}
cout << prodotto << endl;
}