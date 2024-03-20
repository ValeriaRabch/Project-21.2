#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

void FullMassive(FILE* fres, int mount) {
	char name[20]; FILE* file; char arr[50];


	for (int i = 0; i < mount; i++) {

		cout << "Enter name "; cin >> name;
		file = fopen(Name(name, arr), "w");

		cout << "Enter information in this file. When you finish enter 0 ";
		FullFile(file, fres);

		fclose(file);
	}
}

int main() {
	int a; FILE* fres;
	cout << "Enter mount files"; cin >> a;
	if (a > 5 || a < 2) {
		cout << "Error";
		return 0;
	}

	fres = fopen("d:\\Valeria\\fres.txt", "w");
	FullMassive(fres, a);
	cout << endl;

	fclose(fres);
	return 0;
}