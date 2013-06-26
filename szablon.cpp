#include "aghInclude.h"

double suma(char ** tab, int ilosc){
	string lancuch = tab[0];
	double wynik = strlen(tab[0]);
	
	cout << tab[0];
	for(int i=1; i<=ilosc-1;i++){
		lancuch += tab[i];
		wynik += strlen(tab[i]);
		cout << " + " << tab[i];
	}
	cout << " = " << lancuch << "(" << wynik << ")" << endl;
	return wynik;
}
