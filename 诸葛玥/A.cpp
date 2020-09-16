#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int len, v, l, r;
		cin >> len >> v >> l >> r;
		if (l%v != 0)l = (l / v + 1)*v;
		if (r%v != 0)r = (r / v)*v;
		int ans = len / v - (r - l) / v - 1;
		cout << ans << endl;
	}
	return 0;
}