#include<iostream>
#include<cmath>

using namespace std;

int main() {
	int n, m;
	cin >> n >> m;

	int la = ceil(sqrt(n));
	int lb = ceil(sqrt(m));

	int c = 0;
	for (int i = 0; i <= la; i++) {
		for (int j = lb; j >= 0; j--) {
			if ((i*i + j == n) && (j*j + i == m)) {
				c++;
				break;
			}
		}
	}

	cout << c;
}
