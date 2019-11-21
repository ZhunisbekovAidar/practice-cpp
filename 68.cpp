#include <iostream>
#include <cmath>
using namespace std;
int main() {
	float a, b, c, disc, x1,x2;
	cin >> a >> b >> c;
	disc = b*b - (4*a*c);
	if (disc >= 0) {
		x1 = (-b+sqrt(disc))/(2*a);
		x2 = (-b-sqrt(disc))/(2*a);	
		cout << "X1= " << x1 << endl;
		cout << "X2= " << x2 << endl;
	} else {
		cout << "error";
	}
}
