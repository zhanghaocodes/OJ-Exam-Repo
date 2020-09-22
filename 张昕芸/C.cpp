#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<algorithm>
#include<cmath>
using namespace std;
int n;
int a[1000000];
bool cmp(int a,int b) {
	return a < b;
}

int composite(int x) {
	int sum = 0;
	int pre = a[x];
	int cnt = 1;
	sum += a[x];
	for (int i = x + 1; i < n; i++) {
		if (a[i] * pre < 0) {
			sum += a[i];
			pre = a[i];
			cnt++;
		}
	}
	return sum;

}
int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		int pos = 0, neg = 0;
		int max = 0;

		int endPos = 0;
		for (int i = 0; i < n; i++) {
			scanf("%d", &a[i]);
			if (a[i] < 0)
				neg++;
			if (a[i] > 0)
				pos++;
		}
		for (int i = 0; i < n - 1; i++) {
			if (a[i] * a[0] < 0 && a[i] * a[i + 1] < 0) {
				endPos = i;
				break;
			}
		}
		if (pos == 0 || neg == 0) {
			sort(a, a + n, cmp);
			printf("%d\n", a[n - 1]);
		}
		else {
			
			for (int i = 0; i <= endPos; i++) {
				int value = composite(i);
				//printf("endPos = %d\n", endPos);
				//printf("value = %d\n", value);
				if (value > max) 
					max = value;
			}
		    printf("%d\n", max);
		}
		
	}
}