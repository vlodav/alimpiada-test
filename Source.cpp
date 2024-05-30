#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int x0, y0, R, N;
	cin >> x0 >> y0 >> R >> N;
	int count = 0;
	for (int i = 0; i < N; ++i) {
		int x, y;
		cin >> x >> y;
		if (sqrt(pow(x - x0, 2) + pow(y - y0, 2)) > R) {
			++count;
		}
	}
	cout << count << endl;
	return 0;
}