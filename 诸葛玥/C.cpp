#include <iostream>
#include <algorithm>
using namespace std;
/*
贪心算法，将压缩量（a[i]-b[i]）排序，从最大差值依次压缩，直到可以放入
*/
int main() {
	int n, m;
	cin >> n>>m;
	int *a = new int[n];
	int *b = new int[n];
	int *cha = new int[n];
	int maxsum = 0;
	int leastsum = 0;
	int count = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i] >> b[i];
		cha[i] = a[i] - b[i];
		maxsum += a[i];//计算不压缩最大和
		leastsum += b[i];//计算所有歌都压缩最小和
	}
	if (leastsum > m) {//如果所有歌都压缩仍不满足
		cout << -1;
	}
	else {
		sort(cha, cha + n);
		for (int i = n - 1; i >= 0; i--) {
			if (maxsum <= m) break;//满足情况退出
			else {
				maxsum -= cha[i];//仍需压缩
				count++;//压缩次数+1
			}
		}
		cout << count;
	}
	delete a, b, cha;
	return 0;
}