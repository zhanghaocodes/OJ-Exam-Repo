#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<algorithm>
using namespace std;

struct node {
	char s[5];
	int times;
}Nodes[300];

bool cmp(node A, node B) {
	return A.times < B.times;
}

int main() {
	char str[150];
	int n;
	scanf("%d", &n);
	scanf("%s", str);
	int k = 0;
	for (int i = 0; i < n; i++) {
		Nodes[i].times = 0;
	}
	Nodes[0].s[0] = str[0];
	Nodes[0].s[1] = str[1];
	Nodes[0].s[2] = '\0';
	Nodes[0].times++;
	k++;
	for (int i = 1; i < n - 1; i++) {
		int j;
		for (j = 0; j < k; j++) {
			if (str[i] == Nodes[j].s[0] && str[i + 1] == Nodes[j].s[1]) {
				Nodes[j].times++;
				break;
			}
		}
		if (j == k) {
			Nodes[k].s[0] = str[i];
			Nodes[k].s[1] = str[i + 1];
			Nodes[k].s[2] = '\0';
			k++;
			Nodes[k].times++;
		}
	}
	sort(Nodes, Nodes + k, cmp);
	/*for (int i = 0; i < k; i++) {
		printf("%s %d\n", Nodes[i].s,Nodes[i].times);

	}*/
	printf("%s", Nodes[k - 1].s);
}