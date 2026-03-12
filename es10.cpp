/*Esercizio 2. Sono dati N dipendenti. Per ogni dipendente: stipendio base, 
tipo contratto. Se: Tempo pieno +15% , 
Part-time  +10% , Stage → +5%. Stampare stipendio finale, totale stipendi.*/

#include<string>
#include <iostream> 
using namespace std;

int main() {
    int n;
    int tipocontratto;
    int stipebase=500;
    int stipendio;
    

    cout<< "inserisci il numero di dipe";
    cin>> n;
    cout<< "il n di dipe è " << n << endl;

    for(int i=0; i<n; i++)){

        cout<< "inserisci il tipo di contratto: 1=tempopieno, 2=Part-time, 3=Stage";
        cin>> tipocontratto;

        switch (tipocontratto){
        case 1:
        stipendio=stipebase+stipebase*0.15;
            break;

        case 2:
        stipendio=stipebase+stipebase*0.10;
            break;

             case 3:
        stipendio=stipebase+stipebase*0.05;
            break;
        }
         cout<< "lo stipe è" <<  stipendio << endl;

        }

    }
