// Genera un array di 10 numeri e verificare se al suo interno ci sono almeno 3 numeri pari.

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <cmath>

using namespace std;

int main(){
int n=10;
int num=0;
int conta=0;
    int vet[n];
    for(int i=0; i<n; i++){
    num=rand()%10+1;
    if(num%2==0){
        conta++;
    }
    }

if(conta>=3){
    cout<<"ci sono almeno 3 numeri pari"<< endl;
}else{
cout<< "non ci sono almeno 3 numeri pari" << endl;
}

for(int i=0; i<n; i++){
cout << vet[i] << endl;
}}



