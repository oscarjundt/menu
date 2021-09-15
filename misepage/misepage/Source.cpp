#include <iostream>
#include <conio.h>
#include "myconio.h"
#include "test.h"
#include "test2.h"
using namespace std;

int main() {
	int nb = 5;
	ini();
	bool t = true;
	while (t)
	{
		char com = _getch();
		if (com != 13) {
			switch (com)
			{
			case 0x50: if (nb < 13) { nb = nb + 2; }
					 else { nb = 5; };
				break;
			case 0x48: if (nb > 5) { nb = nb - 2; }
					 else { nb = 5; };
				break;
				
			}
			gotoxy(0,nb);
			

		}
		else {
			clrscr();
			switch (nb)
			{
			case 5:  cub();
				break;
			case 7: cercle();
				break;
			case 9: calcule();
				break;
			case 11: nbmonnais();
				break;
			case 13: polinom();
			}
			system("Pause");
			nb = 5;
			clrscr();
			ini();
		}
		
		
		
	}
	

}