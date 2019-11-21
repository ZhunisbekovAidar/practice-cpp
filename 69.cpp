#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double a, b, c;
	cin >> a >> b >> c;
	double p = (a+b+c)/2;
	if (a+b>c && a+c>b && b+c>a) {
		double area = pow(p*(p-a)*(p-b)*(p-c), 0.5);
		cout << area;
	} else {
		cout << "Incorrect triangle!";
	}
}
