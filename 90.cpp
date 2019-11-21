#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int sum=0;
	for (int i = 3; i <= 111; i+=2) {
		sum = sum+cos((i/(i+2)) * (3.14)/180);
	}
	cout << sum;
}
