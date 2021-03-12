#include <iostream>
#define N 100

using namespace std;

//Я тупой барашек и сделал из десятичной в двоичную...
//[+]. (необязательно)2->10. Переведите число из двоичной системы в десятичную.

int main() {
	int decimalSystemNo = 0, binarySystemNo[N], i = 0;

	cout << "Enter a decimal number: ";
	cin >> decimalSystemNo;

	while (decimalSystemNo != 0) {
		binarySystemNo[i] = abs(decimalSystemNo % 2);

		if (abs(decimalSystemNo) == 1) {
			break;
		}

		decimalSystemNo = decimalSystemNo / 2;
		i++;
	}

	cout << "A number in binary: ";

	if (decimalSystemNo < 0) {
		cout << "-";
	}
	else {}

	for (i; i >= 0; i--) {
		cout << binarySystemNo[i];
	}

	cout << ";" << endl;

	

	int decimalSystem = 0, binarySystem = 0, degree = 0;

	cout << "Enter a binary number: ";
	cin >> binarySystem;

	while (binarySystem != 0)
	{
		decimalSystem += ((binarySystem % 10) * pow(2, degree));

		binarySystem = binarySystem / 10;

		degree++;
	}

	cout << "A number in decimal: " << decimalSystem << endl;

	return 0;
}
