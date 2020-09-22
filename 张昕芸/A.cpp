#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<algorithm>
#include<cmath>
using namespace std;
int minimum = 1000000005;
int x[150];
int n;

int remove(int k) {
	int cost = 0;
	for (int i = 0; i < n; i++) {
		if (i != k) {
			if (abs(x[i] - x[k]) % 2 != 0) {
				cost++;
			}
		}
	}
	return cost;
}
int main() {	
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &x[i]);
	}
	for (int i = 0; i < n; i++) {
		int cost = remove(i);
		if (cost < minimum) {
			minimum = cost;
		}
	}
	printf("%d", minimum);
}