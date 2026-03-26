//4. Genera un vettore di 10 numeri casuali e stampali in ordine inverso.

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <cmath>

using namespace std;

int main(){
    int n=10;
    int vet[n];
cout << "il vettore nell'ordine giusto ";
    for(int i=0; i<n; i++){
    vet[i]=rand()%10+1;   
    cout << vet[i]<<" ";
    }
cout <<"il vettore con i numeri invertiti";
    for(int i=n-1; i>=0;  i--){
    cout << vet[i]<<" "; 
        
    }}