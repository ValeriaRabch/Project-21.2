#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;



int main() {
	int a; FILE* fres;
	cout << "Enter mount files"; cin >> a;
	if (a > 5 || a < 2) {
		cout << "Error";
		return 0;
	}

	fres = fopen("d:\\Valeria\\fres.txt", "w");
	return 0;
}