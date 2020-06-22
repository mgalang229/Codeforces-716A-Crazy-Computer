#include <bits/stdc++.h>

#define ll long long

using namespace std;

void decode() {
	int n, c, x;
	cin >> n >> c;
	vector<int> t;
	for(int i = 0; i < n; ++i) {
		cin >> x;
		t.push_back(x);
	}
	int cnt = 0;
	for(int i = 0; i < n; ++i) {
		if(i == 0) cnt++;
		else {
			if(t[i] - t[i-1] <= c) {
				cnt++;
			}
			else {
				cnt = 1;
			}
		}
	}
	cout << cnt << "\n";
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	decode();
	return 0;
}
