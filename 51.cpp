#include <iostream>
using namespace std;
int main() {
	int a, b ,c;
	cin >> a >> b >> c;
	if (a+b == c) {
		cout << "yes";
	} else if (a+c == b) {
		cout << "yes";
	} else if (b+c == a) {
		cout << "yes";
	} else {
		cout << "no";
	}
}
