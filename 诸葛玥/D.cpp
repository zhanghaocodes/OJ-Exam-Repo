#include <iostream>
using namespace std;
/*
找到所有相同的d的个数，比较其大小，用visit数组标记已计数过
*/
int main() {
	int n;
	cin >> n;
	int *a = new int[n];
	int *b = new int[n];
	int *visit = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		visit[i] = 0;
	}
	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}
	int maxc = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] != 0 && visit[i] == 0) {//对于被除数为0的a以及已经在之前计算过为0的下标跳过
			int count = 1;
			double d = -(double)b[i] / (double)a[i];
			visit[i] = 1;
			for (int j = i + 1; j < n; j++) {
				if (visit[j] == 0 && d*a[j] + b[j] == 0) {//若该下标的a、b为访问过并且根据公式计算为0则count++
					visit[j] = 1;
					count++;
				}
			}
			maxc = maxc < count ? count : maxc;//比较每轮中的最大值
		}
	}
	cout << maxc << endl;
	delete a, b, visit;
	return 0;
}