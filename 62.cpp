#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int numb, x1, x2, x3, x4, x5;
	cin >> numb;
	x5=numb%10;
	numb=numb/10;
	x4=numb%10;
	numb=numb/10;
	x3=numb%10;
	numb=numb/10;
	x2=numb%10;
	numb=numb/10;
	x1=numb;
	x2=x2*0;
	x4=x4*0;
	int numb2 = x1*10+x2;
	numb2 = numb2*10+x3;
	numb2 = numb2*10+x4;
	numb2 = numb2*10+x5;
	cout << numb2;
}
