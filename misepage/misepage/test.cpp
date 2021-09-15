#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
#include "test.h"
#include "myconio.h"
using namespace std;

float aire(float x) {
	float res = M_PI * (x * x);
	return res;
}
float volume(float x2) {
	float res2 = (4 / 3) * M_PI * (x2 * x2 * x2);
	return res2;
}
void affichage(float x3, float y3) {
	cout << x3 << endl;
	cout << y3 << endl;
}
void cercle() {
	float r;
	bool t = true;
	while (t) {
		cin >> r;
		if (r >= 0) {
			float resultat = aire(r);
			float resultat2 = volume(r);
			affichage(resultat, resultat2);
			t = false;
		}
		else {
			cout << "erreur la variable r ne peux pas etre negatif" << endl;
			t = true;
		}
	}
}
void cub() {
	int table[50];
	int rescar;
	int rescub = 1;
	int inc = 0;
	for (int i = 0; i < 50; i++) {
		table[i] = i;
	}
	for (int i2 = 0; i2 < 50; i2++) {
		if (inc <= 10) {
			rescar = table[i2] * table[i2];
			for (int i3 = 1; i3 <= 3; i3++) {
				rescub = rescub * table[i2];
			}
			printf("%d     %d      %d\n", table[i2], rescar, rescub);
			rescub = 1;
			inc = inc + 1;
		}
		else {
			system("Pause");
			inc = 0;
		}
	}
}
void ini() {
	char vert = 179;
	char hor = 196;
	char hd = 191;
	char hg = 218;
	char bd = 217;
	char bg = 192;
	string to = "";
	string to2 = "";
	string grr[6] = { "Menu","cube","cercle","calcule","monnais","polinom"};
	string to22 = "";
	to22 = vert;
	textcolor(GREEN);
	for (int i = 0; i < 80; i++) {
		to = to + hor;
		to2 = to2 + hor;
		to22 = to22 + " ";
	}
	to22 = to22 + vert;
	cout << to;
	for (int i2 = 0; i2 < 25; i2++) {
		cout << to22 << endl;
		switch (i2)
		{
		case 1: cout << "                                " << grr[0] << endl;
			break;
		case 2: cout << "          " << grr[1] << endl;
			break;
		case 3: cout << "          " << grr[2] << endl;
			break;
		case 4: cout << "          " << grr[3] << endl;
			break;
		case 5: cout << "          " << grr[4] << endl;
			break;
		case 6: cout << "          " << grr[5] << endl;
		}

	}
	cout << to2;
	gotoxy(0,5);
}

