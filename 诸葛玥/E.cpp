#include <iostream>
#include <algorithm>
using namespace std;
/*
先从小到大排序，之后比较该坐标后面有3个以上剩余数时，放于前一数组还是后一数组
*/
struct node {
	int team;
	int num;
};
bool cmp(node a, node b) {
	return a.num < b.num;
}
int main() {
	int n;
	cin >> n;
	node *p = new node[n];
	int *minnum = new int[n];
	int t = 1;//team计数
	for (int i = 0; i < n; i++) {
		cin >> p[i].num;
		p[i].team = 1;
	}
	sort(p, p + n);
	int a = 0, b = 2;
	for (int i = b+1; i < n; i++) {
		if (n - i < 4)break;//若后续数组不足3个数，跳出循环
		else {
			//为写完
		}
	}
}