#include <iostream>

using namespace std;

//2. КОНИ.Вводим 4 целых числа.это координаты двух коней на шахматной доске.Бьют ли они друг друга ?

int main() {
	int x1 = 0, y1 = 0, x2 = 0, y2 = 0;

	cout << "Enters coordinats from 1 to 8 white horse: ";
	cin >> x1;
	cin >> y1;
	cout << "Enters coordinats from 1 to 8 black horse: ";
	cin >> x2;
	cin >> y2;

	if ((x1 < 1) || (x1 > 8) || (x2 < 1) || (x2 > 8) || (y1 < 1) || (y1 > 8) || (y2 < 1) || (y2 > 8)) {
		cout << "Error. The coordinates must be from 1 to 8!" << endl;
		return -1;
	}
	else if ((x1 == x2) && (y1 == y2))
	{
		cout << "Error. Horses in the same cage." << endl;
		return -1;
	}
	else {}


	if (((x1 + 2 == x2) || (x1 + 1 == x2) || (x1 - 1 == x2) || (x1 - 2 == x2)) && ((y1 + 2 == y2) || (y1 + 1 == y2) || (y1 - 1 == y2) || (y1 - 2 == y2))) {
		cout << "They hit each other!" << endl;
	}
	else {
		cout << "Don't hit each other." << endl;
	}

	return 0;
}
