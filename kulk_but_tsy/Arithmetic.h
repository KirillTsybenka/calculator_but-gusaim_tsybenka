#include <iostream>
using namespace std;

int Sum() // ������������
{
	cout << "������� 2 �����"<<endl;
	int a;
	cin >> a;
	int b;
	cin >> b;
	cout << a << "+" << b << "=";
	return  a + b;
}

int Sub() // ��������
{
	cout << "������� 2 �����" << endl;
	int a;
	cin >> a;
	int b;
	cin >> b;
	cout << a << "-" << b << "=";
	return a - b;
}

int Mult() // ���������
{
	cout << "������� 2 �����" << endl;
	int a;
	cin >> a;
	int b;
	cin >> b;
	cout << a << "*" << b << "=";
	return a * b;
}

int Division() // �������
{
	cout << "������� 2 �����" << endl;
	int a;
	cin >> a;
	int b;
	cin >> b;
	if (b == 0){
		cout << "������ ����";
		return 0;
	}
	else{
		cout << a << ":" << b << "=";
		return a / b;
	}
}

int Mod() // ������� �� �������
{
	cout << "������� 2 �����" << endl;
	int a;
	cin >> a;
	int b;
	cin >> b;
	cout << "������� �� ������� " << a << " �� ����� " << b << " �����:";
	return a % b;
}


