#include "aghInclude.h"

int aghFib::operator[](int n){
	return (1.0/sqrt(5.0))*(pow((1.0+sqrt(5.0))/2.0, n) - pow((1.0-sqrt(5.0))/2.0, n));
}
