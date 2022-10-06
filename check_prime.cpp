#include<iostream>
using namespace std;

int main() {
	int num;
	cin >> num;
	int isPrime = 1;
	for (int i=2; i<num; i++) {
		if (num % i == 0) {
			isPrime = 0;
		}
	}
	if (isPrime) {
		cout << "Number is prime";
	} else {
		cout << "Number is not prime";
	}
	return 0;
}