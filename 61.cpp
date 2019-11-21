#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int numb, x1, x2, x3, x4;
	cin >> numb;
	x4=numb%10;
	numb=numb/10;
	x3=numb%10;
	numb=numb/10;
	x2=numb%10;
	numb=numb/10;
	x1=numb;
	if (x1==x2 || x1==x3 || x1==x4 || x2==x3 || x2==x4 || x3==x4){
		cout << "yes";
	} else {
		cout << "no";
	}
}
