//============================================================================
// Name        : Hello.cpp
// Author      : Turner Titties
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

// define class A
class A{
	int a, b;

public:
	void setValues(){
		cout << "Int A.a: ";
		cin >> a;
		cout << endl;

		cout << "Int A.b: ";
		cin >> b;
		cout << endl;
	}

public:
	void printValues();
};

// Add a definition for one of Class A's public member functions
void A::printValues(){
	cout << "Class A, int a = " << A::a;
	cout << endl;
	cout << "Class A, int b = " << A::b;
	cout << endl;
}

class B{
	int c, d;

public:
	void setValues(){
		cout << "Int B.a: ";
		cin >> c;
		cout << endl;

		cout << "Int B.b: ";
		cin >> d;
		cout << endl;
	}

public:
	void printValues();
};

void B::printValues(){
	cout << "Class B, int c = " << B::c;
	cout << endl;
	cout << "Class B, int d = " << B::d;
	cout << endl;
}

int main() {
	A classA;
	B classB;

	classA.setValues();
	classB.setValues();

	classA.printValues();
	classB.printValues();
}

// cin >> input - gets input
// getline(cin, variable) - gets input
// cout >> output - prints output
// cerr - error output
// clog - logging output
