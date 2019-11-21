#include <iostream>
#include <cmath>
using namespace std;
int main() {
	float sum=0;
	for (float i = 2; i <= 9; i++) {
		sum=sum+(i/(i+1));
	}
	cout << sum;
}
