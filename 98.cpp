#include <iostream>
using namespace std;
int main() {
	float dist=10;
	int n;
	cin >> n; // if number of days exceeds 21 total distance exceeds 80 km
	for (int i = 1; i <= n; i++) {
		dist = dist+(dist*0.1);
	}
	cout << dist;
}
