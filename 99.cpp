#include <iostream>
using namespace std;
int main() {
	for (int i = 1; i <= 9; i++) {
		for (int j = 0; j <= 9; j++) {
			for (int k = 0; k <=9; k++) {
				for (int t = 0; t <= 9; t++) {
					if (i != j && i != k && i != t && j != k && j != t && k !=t) {
						cout <<i<<j<<k<<t<<" ";
					}
				}
			}
		}
		cout << endl;
	}
}
