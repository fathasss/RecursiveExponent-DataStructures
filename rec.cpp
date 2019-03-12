#include "pch.h"
#include <iostream>
using namespace std;
int us(int sayi, int sayius) {
	if (sayi == 1) {
		return 1;
	}
	else if (sayius == 1) {
		return sayi;
	}
	else if (sayi == 0 && sayius == 0 || sayius<0 ) {
		return -1;
	}
	return (sayi*us(sayi, sayius - 1));
}
int main()
{
	int a, b;
    cout<< "Sayi girin ";
	cin >> a;
	cout << "Us girin: ";
	cin >> b;
	cout<<us(a,b);
}
