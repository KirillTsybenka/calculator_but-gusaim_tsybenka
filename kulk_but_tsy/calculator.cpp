#include <iostream>
#include <vector>
#include "Arithmetic.h"
#include "Programmer.h"
#include "Math.h"
#include "Trigonometry.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	cout << "1.ÑÓÌÌÀ" << endl
		<< "2.ÐÀÇÍÎÑÒÜ" << endl
		<< "3.ÓÌÍÎÆÅÍÈÅ" << endl
		<< "4.ÄÅËÅÍÈÅ" << endl
		<< "5.ÎÑÒÀÒÎÊ ÎÒ ÄÅËÅÍÈß" << endl
		<< "6.ÁÈÍÀÐÍÎÅ ÍÅ" << endl
		<< "7.ÁÈÍÀÐÍÎÅ ÈËÈ" << endl
		<< "8.ÁÈÍÀÐÍÎÅ È" << endl
		<< "9.ÁÈÍÀÐÍÎÅ XOR" << endl
		<< "10.ÁÈÍÀÐÍÎÅ NAND" << endl
		<< "11.ÁÈÍÀÐÍÎÅ NOR" << endl
		<< "12.ÌÎÄÓËÜ ×ÈÑËÀ" << endl
		<< "13.ÊÎÐÅÍÜ ×ÈÑËÀ" << endl
		<< "14.ÎÁÐÀÒÍÎÅ Ê ×ÈÑËÓ" << endl
		<< "15.ÑÈÍÓÑ" << endl
		<< "16.ÊÎÑÈÍÓÑ" << endl
		<< "17.ÃÈÏÅÐÁ. ÑÈÍÓÑ" << endl
		<< "18.ÃÈÏÅÐÁ. ÊÎÑÈÍÓÑ" << endl
		<< "19.ÑÒÅÏÅÍÜ ×ÈÑËÀ" << endl
		<< "20.ÔÀÊÒÎÐÈÀË" << endl;
	while (true) {
		cout << "ÂÛÁÅÐÈÒÅ ÎÏÅÐÀÖÈÞ: ";
		int p = 0;
		cin >> p;
		if (isdigit(p) == true) {
			return 0;
		}
		else{
			switch (p) {
			case 1:
				cout << Sum() << endl;
				break;
			case 2:
				cout << Sub() << endl;
				break;
			case 3:
				cout << Mult() << endl;
				break;
			case 4:
				cout << Division() << endl;
				break;
			case 5:
				cout << Mod() << endl;
				break;
			case 6:
				cout << Negation() << endl;
				break;
			case 7:
				cout << Conjunction() << endl;
				break;
			case 8:
				cout << Disjunction() << endl;
				break;
			case 9:
				cout << ExclusiveOr() << endl;
				break;
			case 10:
				cout << ConjunctionNegation() << endl;
				break;
			case 11:
				cout << DisjunctionNegation() << endl;
				break;
			case 12:
				cout << Absolute() << endl;
				break;
			case 13:
				cout << Sqrt() << endl;
				break;
			case 14:
				cout << ReciprocalFunction() << endl;
				break;
			case 15:
				cout << Sin() << endl;
				break;
			case 16:
				cout << Cos() << endl;
				break;
			case 17:
				cout << Sh() << endl;
				break;
			case 18:
				cout << Ch() << endl;
				break;
			case 19:
				cout << Degree() << endl;
				break;
			case 20:
				cout << Factorial() << endl;
				break;
			}
		}
	}
}