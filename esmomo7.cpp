//3. Genera un vettore di 10 numeri casuali tra 1 e 50 e trova il massimo e la sua posizione

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <cmath>
using namespace std;

int main(){
    srand(time(0));
    int n=10;
    int vet[n];
    
    int max=0;
    int posizione=0;
    for(int i=0; i<n; i++){
        vet[i]=rand()%50+1;
        if(vet[i]>max){
            max=vet[i];
            posizione=i;
        }

    }

    
    cout <<"il massimo è" << max << "la posizione è" << posizione<< endl; 
for(int i=0; i<n; i++){
    cout<< vet[i] << endl;
}
}