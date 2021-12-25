#include <iostream>
#include <random>

using namespace std;

int main() {
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<> distr(1, 75);

	char symbols[75]{ 'A', 'a', 'B', 'b', 'C', 'c', 'D', 'd', 'E', 'e', 'F', 'f', 'G', 'g', 'H', 'h', 'I', 'i', 'J', 'j', 'K', 'k', 'L', 'l', 'M', 'm', 'N', 'n', 'O', 'o', 'P', 'p', 'Q', 'q', 'R', 'r', 'S', 's', 'T', 't', 'U', 'u', 'V', 'v', 'W', 'w', 'X', 'x', 'Y', 'y', 'Z', 'z', '1', '2', '3', '4', '5', '6', '7', '8', '9', '!', '@', '#', '$', '%', '^', '&', '*', '(', ')', '-', '_', '+', '='};
	int indx = 0, count;

	cout << "Write the password length: ";
	cin >> count;

	for (int i = 0; i < count; i++) {
		indx = distr(gen);

		cout << symbols[indx];
	}

	cout << "" << endl;

	system("pause");
	return 0;
}