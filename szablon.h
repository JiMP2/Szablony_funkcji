#ifndef SZABLON_H
#define SZABLON_H

using namespace std;

/*SZABLON FUNKCJI SUMUJĄCEJ*/
template <typename T> double suma(T tab, int ilosc){
	double wynik=0;
	for(int i=0; i<ilosc-1; i++){
		wynik += tab[i];
		if(tab[i]>=0){
			cout << tab[i] << "+";
		}else{
			cout << "(" << tab[i] <<")+";
		}
	}
	wynik += tab[ilosc-1];
	cout << tab[ilosc-1] << " = " << wynik << endl;
	return wynik;
}

/*FUNKCJA SPECJALIZOWANA*/
double suma(char ** tab, int ilosc);
#endif
