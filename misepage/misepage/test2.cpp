#include <iostream>
#include "test2.h"
using namespace std;
int somme(int x, int y) {
	int res = x + y;
	return res;
}
int soustraction(int x2, int y2) {
	int res2 = x2 - y2;
	return res2;
}
int multi(int x3, int y3) {
	int res3 = x3 * y3;
	return res3;
}
float div(float x4, float y4) {
	float res4 = x4 / y4;
	return res4;
}
void affichage(int ress, int ressou, int ressmu, float resdiv) {
	cout << "l'addition est :" << ress << endl;
	cout << "la soustraction est :" << ressou << endl;
	cout << "la multiplication fait: " << ressmu << endl;
	cout << "la division est: " << resdiv << endl;
}
void calcule() {
	int nb1;
	int nb2;
	int resultat;
	int resultat2;
	int resultat3;
	float resultat4;
	cout << "choisir nombre: ";
	cin >> nb1;
	cout << "choisir nombre: ";
	cin >> nb2;
	resultat = somme(nb1, nb2);
	resultat2 = soustraction(nb1, nb2);
	resultat3 = multi(nb1, nb2);
	resultat4 = div(float(nb1), float(nb2));
	affichage(resultat, resultat2, resultat3, resultat4);
}


void nbmonnais() {
	float tab2[8] = { 1,2,5,10,20,50,100,200 };
	int tab[8];
	float res = 0;
	for (int i = 0; i < 8; i++) {
		cout << tab2[i] << "c: ";
		cin >> tab[i];
	}
	for (int i2 = 0; i2 < 8; i2++) {
		res = res + tab[i2] * tab2[i2];
	}
	cout << res / 100 << endl;
}

void polinom() {
	int a;
	int b;
	int c;
	int delta;
	int solution1;
	int solution2;
	cin >> a;
	cin >> b;
	cin >> c;
	if (a == 0 && b == 0 && c == 0) {
		cout << "il y'a une infinite de solution" << endl;
	}
	else if (a == 0 && b == 0 && c != 0) {
		cout << "aucun solution" << endl;
	}
	else {
		delta = (b * b) - (4 * a * c);
		if (delta == 0) {
			cout << "une solution: " << (-b) / (2 * a) << endl;

		}
		else if (delta > 0) {
			solution1 = (-b + sqrt(delta)) / (2 * a);
			solution2 = (-b - sqrt(delta)) / (2 * a);
			cout << solution1 << " et " << solution2 << endl;
		}
		else if (delta < 0) {
			solution1 = (-b) / (2 * a) + sqrt((abs(-delta)) / (2 * a));
			solution2 = (-b) / (2 * a) - sqrt((abs(-delta)) / (2 * a));
			cout << solution1 << " et " << solution2 << endl;
		}
	}
}