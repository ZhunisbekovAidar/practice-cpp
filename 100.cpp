#include <iostream>
using namespace std;
int main() {
	for (int i = 1; i <= 9; i++) {
		for (int j = 0; j <= 9; j++) {
			for (int k = 0; k <=9; k++) {
				for (int t = 0; t <= 9; t++) {
					if (i != 5 && i != 6 && j != 5 && j !=6 && k != 5 && k != 6 && t != 5 && t != 6) {
						cout <<i<<j<<k<<t<<" ";
					}
				}
			}
		}
		cout << endl;
	}
}
