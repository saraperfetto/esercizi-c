#include <iostream> 
#include <string> 
using namespace std;

int main() {
int n;
cout << "dimmi il numero: " << n << endl;
cin>>n;
int totale=1;


while(n>1){
    totale = totale * n;
n--;
}
cout <<totale << endl;;

}