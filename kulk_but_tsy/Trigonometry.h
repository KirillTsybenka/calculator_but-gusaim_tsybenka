#include <iostream>
using namespace std;
double Sin() {
	double a;
	cout << "�������� �������� � ��������: ";
	cin >> a;
	a = a / 57.2958;
	return a - ((a * a * a) / 6) + ((a * a * a * a * a) / 120) - ((a * a * a * a * a * a * a) / 5040);
}

double Cos() {
	double a;
	cout << "�������� �������� � ��������: ";
	cin >> a;
	a = a / 57.2958;
	return 1 - ((a * a) / 2) + ((a * a * a * a) / 24) - ((a * a * a * a * a * a) / 720);
}

double Sh() {             //������. �����
	double a;
	cout << "�������� �����: ";
	cin >> a;
	return a + ((a * a * a) / 6) + ((a * a * a * a * a) / 120) + ((a * a * a * a * a * a * a) / 5040);
}

double Ch() {             //������. �������
	double a;
	cout << "�������� �����: ";
	cin >> a;
	return 1 + ((a * a) / 2) + ((a * a * a * a) / 24) + ((a * a * a * a * a * a) / 720);
}





