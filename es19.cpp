//3. Genera un vettore di 10 numeri casuali tra 1 e 50 e trova il massimo e la sua posizione
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <cmath>

using namespace std;

int main(){
    int n=10;
    int vet[n];
    int max=0;
    int x;
   
    for (int i=0; i<n; i++){
    vet[i]=rand()%50+1;
    if(vet[i]>max){
        max=vet[i];
        x=i;
    }
    }
    for(int i=0; i<n; i++){
        cout << vet[i] << endl;
    }
    cout << max <<" e la psoizione " << x  << endl;
}