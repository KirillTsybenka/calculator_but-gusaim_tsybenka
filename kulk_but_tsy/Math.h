#include <iostream>
using namespace std;

int Absolute()
{
	int a;
	cin >> a;
	if (a < 0){
		cout << "|"<< a <<"|=";
		return -a;
	}
	else{
		cout << "|" << a << "|=";
		return a;
	}
}

double Sqrt() {
	int a;
	cin >> a;
	if (a < 0) {
		cout << "ÒÎËÜÊÎ ÄËß ÍÅÎÒÐÈÖÀÒÅËÜÍÛÕ ×ÈÑÅË";
		return 0;
	}
	else {
		double b = 0;
		while (b * b <= a) {
			b = b + 0.01;
		};
		cout << "ÊÎÐÅÍÜ ÈÇ " << a << "=";
		return b;
	}
}

double ReciprocalFunction()
{
	cout << "ÂÂÅÄÈÒÅ ×ÈÑËÎ =";
	double a;
	cin >> a;
	cout << 1 << "/" << a << "=";
	return 1 / a;
}

double Degree() {
	cout << "ÂÂÈÄÒÅ ÑÀÌÎ ×ÈÑËÎ È ÑÅÏÅÍÜ: ";
	double a;
	cin >> a;
	double c = a;
	int b;
	cin >> b;
	if (b < 1)
		return 1;
	for (int i = 1; i < b; i++)
	{
		a *= c;
	}
	return a;
}

double Factorial()
{
	cout << "ÂÂÈÄÒÅ ÑÀÌÎ ×ÈÑËÎ: ";
	double a;
	cin >> a;
	double b=1;
	for (int i = 1; i <= a; i++)
	{
		b *= i;
	}
	return b;
}