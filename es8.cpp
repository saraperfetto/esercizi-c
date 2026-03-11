/* Ad ogni iterazione, il programma deve chiedere: auto, moto. : benzina, diesel, elettrico e i km. Dopo aver calcolato il costo,
 chiedere se l’utente vuole inserire un altro veicolo.  
 Considera che (auto,benzina 0,15- auto,diesel 0,13- auto,
  elettrico 0,08- moto, benzina 0,07-moto,elettrico 0,04)*/

 #include<string>
#include <iostream> 
using namespace std;

int main() {
int tipoveicolo;
int tipocarburante;
int km;
string risposta;

do
{ 
    cout<< "inserisci il tipo veicolo";
    cin>> tipoveicolo;
    cout<< "il tipo veicolo è " << tipoveicolo << endl;

    switch (tipoveicolo){
        case 1:
        cout<< "Auto" << endl;
        break;
        case 2:
        cout<< "Moto" << endl;
        break;
        default:
        cout<< "Tipo veicolo non valido" << endl;
        break;
    }
    cout<< "inserisci il tipo carburante";
    cin>> tipocarburante;
    cout<< "il tipo carburante è " << tipocarburante << endl;
    switch (tipocarburante){
        case 1:
        cout<< "Benzina" << endl;
        break;
        case 2:
        cout<< "Diesel" << endl;
        break;
        case 3:
        cout<< "Elettrico" << endl;
        break;
        default:
        cout<< "Tipo carburante non valido" << endl;
        break;
    }

        



} while (risposta == "si" &&   risposta == "no");
 {          








}  return 0;
}



       


