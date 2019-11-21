#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int numb,x1,x2,x3;
	cin >> numb;
	x3=numb%10;
	numb=numb/10;
	x2=numb%10;
	numb=numb/10;
	x1=numb;
	cout << x3 << x2 << x1;
}
