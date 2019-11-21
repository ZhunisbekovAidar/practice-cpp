#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int x1,x2,x3,x4,y1,y2,y3,y4;
	cout << "Coordinates of 1st point: ";
	cin >> x1 >> y1;
	cout << "Coordinates of 2nd point: ";
	cin >> x2 >> y2;
	cout << "Coordinates of 3rd point: ";
	cin >> x3 >> y3;
	
	if (y1 == y2 && x1 == x3) {
		x4 = x2;
		y4 = y3;
		cout << "Coordinates of 4th point: " << x4 << " " << y4;
	} else {
		cout << "Incorrect rectangle!";
	}
}
