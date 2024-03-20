#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

char* Name(char arr2[], char* arr) {
	char arr1[13] = { "d:\\Valeria\\" };

	int r = 0, index;

	for (int i = 0; ; i++) {
		if (arr1[i] != '\0') {
			arr[i] = arr1[i];
		}
		else {
			index = i;
			for (int j = index; ; j++) {
				arr[i] = arr2[r]; r++; i++;
				if (arr2[r] == '\0') {
					arr[i] = '.';
					arr[i + 1] = 't';
					arr[i + 2] = 'x';
					arr[i + 3] = 't';
					arr[i + 4] = '\0';
					break;
				}
			}
			break;
		}
	}

	return arr;
}

int Line(char* link) {
	FILE* file;
	file = fopen(link, "r");
	char c = fgetc(file);
	int count = 1;

	while (c != EOF) {
		if (c == '\n') {
			count++;
		}
	}

	fclose(file);
	return count;
}

void FullFile(FILE* f, FILE* fres) {
	char arr2[50];
	while (true) {

		cin.getline(arr2, 50);
		if (strcmp(arr2, "0") == 0) {
			fprintf(fres, "\n");
			break;
		}
		fprintf(f, arr2);
		fprintf(f, "\n");
		fprintf(fres, arr2);
		fprintf(fres, "\n");
	}
}

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