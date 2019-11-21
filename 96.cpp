#include <iostream>
#include <cmath>
using namespace std;
int main() {
	float n, x, sum=0, PI=3.1415;
	cin >> n >> x;
	for (int i = 1; i <= n; i++) {
		sum = sum+(1/(cos(pow(x, i)*PI/180)));
	}
	cout << sum;
}
