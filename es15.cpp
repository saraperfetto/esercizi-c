//Esercizio 4: Genera 10 numeri casuali tra 1 e 100 e stampa solo quelli pari 
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <cmath>

using namespace std;

int main(){
int conta=0;
int n;

while(conta<10){
 n=rand()%100+1; //generatore di numeri
 if(n%2==0){
    cout<< n<<endl;
 }
conta++;
}
}