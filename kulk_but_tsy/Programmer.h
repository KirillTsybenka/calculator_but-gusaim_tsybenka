#include <iostream>
using namespace std;

bool Negation() {
	bool a;
	cin >> a;
	return !a;
}

bool Conjunction() {
	bool a;
	cin >> a;
	bool b;
	cin >> b;
	return a or b;
}

bool Disjunction() {
	bool a;
	cin >> a;
	bool b;
	cin >> b;
	return a and b;
}

bool ExclusiveOr() {
	bool a;
	cin >> a;
	bool b;
	cin >> b;
	return (!a or !b) and (a or b);
}

bool ConjunctionNegation() {
	bool a;
	cin >> a;
	bool b;
	cin >> b;
	return (!a or !b);
}

bool DisjunctionNegation() {
	bool a;
	cin >> a;
	bool b;
	cin >> b;
	return (!a and !b);
}


	
