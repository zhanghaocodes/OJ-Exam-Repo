#include <math.h>
#include <iostream>

using namespace std;

int arr[100];
bool visit[100];

int main() {
    int q;
    cin >> q;
    while (q--) {
        int n;
        cin >> n;
        //初始化
        for (int i = 0; i < n; i++) {
            visit[i]=false;//初始化忘写了，加上就a了
            cin >> arr[i];
        }
        //贪心
        for (int i = n - 1; i > 0; i--) {
            if (arr[i] < arr[i - 1]) {
                visit[i - 1] = true;
                swap(arr[i], arr[i - 1]);
            }
        }
        for (int i = 0; i < n - 1; i++) {
            if (visit[i] == false && arr[i] > arr[i + 1]) {
                swap(arr[i], arr[i + 1]);
            }
        }
        //输出
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
