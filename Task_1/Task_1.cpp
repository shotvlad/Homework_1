#include <iostream>

using namespace std;

//1. МУТАНТЫ.Ночью на Минск напало m мутантов.Каждую ночь они размножаются на p процентов.
//Каждый день коммунальные службы Минска уничтожают n мутантов.
//Через сколько суток работники ЖЭСа отпразднуют победу над мутантами ?

int main() {
	int m = 0, p = 0, n = 0, days = 0, check = 0;

	cout << "Attacked mutants: ";
	cin >> m;
	cout << "The percentage of reproduction per night: ";
	cin >> p;
	cout << "Destroyed in a day: ";
	cin >> n;

	check = m;

	while (true)
	{
		if (days == 1) {
			if (check <= m) {
				cout << "The mutants will win. No chance." << endl;
				break;
			}
			else {}
		}
		else {}

		m -= n;

		if (m <= 0) {
			cout << "In " << days << " days, the employees of the GES will celebrate the victory over the mutants" << endl;
			break;
		}
		else {
			m += ((m * p) / 100);

			days++;
		}
	}

	return 0;
}
