#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int numb1, numb2, x1, x2, x3;
	cin >> numb1 >> numb2;
	x3=numb2%10;
	numb2=numb2/10;
	x2=numb2%10;
	numb2=numb2/10;
	x1=numb2%10;
	
	int numb3=numb1*10+x1;
	numb3=numb3*10+x2;
	numb3=numb3*10+x3;
	cout << numb3;
}
	
