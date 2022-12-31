#include <iostream>
using namespace std;

int Sum() // ÑÓÌÌÈĞÎÂÀÍÈÅ
{
	cout << "ÂÂÅÄÈÒÅ 2 ×ÈÑËÀ"<<endl;
	int a;
	cin >> a;
	int b;
	cin >> b;
	cout << a << "+" << b << "=";
	return  a + b;
}

int Sub() // ĞÀÇÍÎÑÒÜ
{
	cout << "ÂÂÅÄÈÒÅ 2 ×ÈÑËÀ" << endl;
	int a;
	cin >> a;
	int b;
	cin >> b;
	cout << a << "-" << b << "=";
	return a - b;
}

int Mult() // ÓÌÍÎÆÅÍÈÅ
{
	cout << "ÂÂÅÄÈÒÅ 2 ×ÈÑËÀ" << endl;
	int a;
	cin >> a;
	int b;
	cin >> b;
	cout << a << "*" << b << "=";
	return a * b;
}

int Division() // ÄÅËÅÍÈÅ
{
	cout << "ÂÂÅÄÈÒÅ 2 ×ÈÑËÀ" << endl;
	int a;
	cin >> a;
	int b;
	cin >> b;
	if (b == 0){
		cout << "ÌÅÍÜØÅ ÍÓËß";
		return 0;
	}
	else{
		cout << a << ":" << b << "=";
		return a / b;
	}
}

int Mod() // ÎÑÒÀÒÎÊ ÎÒ ÄÅËÅÍÈß
{
	cout << "ÂÂÅÄÈÒÅ 2 ×ÈÑËÀ" << endl;
	int a;
	cin >> a;
	int b;
	cin >> b;
	cout << "Îñòàòîê îò äåëåíèÿ " << a << " íà ÷èñëî " << b << " ğàâåí:";
	return a % b;
}


