#include <iostream>

using namespace std;

int main() {
	int num, i;
	i = 2;

	bool isPrime = true;

	cin >> num;
	
	if (1 == num) {
		cout << "Not prime" << endl;
	} else {
		while (i * i <= num) {
			if (0 == num % i) {
				isPrime = false;
				break;
			}		

			i++;
		}

		if (isPrime) {
			cout << "Prime" << endl;
		} else {
			cout << "Not prime" << endl;
		}
	}

	return 0;
}
