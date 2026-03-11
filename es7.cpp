/* Inserisci un codice errore: 400  allora Bad Request, 
401 allora Unauthorized, 403 allora Forbidden, 
404 allora Not Found, altro allora Errore sconosciuto, 200 allora corretto.
 Fai un ciclo dove se l'utente sbaglia più di 3 volta allora esce dal programma e non permette di più di riprovare*/

 #include<string>
#include <iostream> 
using namespace std;

int main() {
int codiceerrore;
int tentativi = 0;

while(tentativi < 3) {
    cout<< "inserisci il codice";
    cin>> codiceerrore;
    cout<< "il codice è " << codiceerrore << endl;

    switch (codiceerrore){
        case 400:
        cout<< "Bad Request" << endl;
        tentativi++;
        break;
         case 401:
        cout<< "Unauthorized" << endl;
        tentativi++;
        break;
         case 403:
        cout<< "Forbidden" << endl;
        tentativi++;
        break;
         case 404:
        cout<< "Bad Request" << endl;
        tentativi++;
        break;
         case 200:
        cout<< "corretto" << endl;
        return 0;
        default:
         cout<< "Errore sconosciuto" << endl;
         break;
         tentativi++;
    }
}  return 0;
}


