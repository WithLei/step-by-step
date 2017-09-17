#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <cmath>
#include <iostream>
#include <algorithm>

using namespace std;

int n, f[200001], a[200001], b[200001], c[200001], p[200001];
long long ans;

inline void insert(int x) {
	for (; x <= n; x += x & (-x)) f[x]++;
}

int calc(int x) {
	int will = 0;
	for (; x; x -= x & (-x)) will += f[x];
	return will;
}

inline void calc(int *a, int *b) {
	memset(f, 0, sizeof(f));
	for (int i = 1; i <= n; i++) p[b[i]] = a[i];
	for (int i = 1; i <= n; i++) {
		ans += i - 1 - calc(p[i]);
		insert(p[i]);
	}	
}

	
int main() {
//	freopen("contest.in", "r", stdin);
//	freopen("contest.out", "w", stdout);
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) scanf("%d%d%d", &a[i], &b[i], &c[i]);
	ans = 0;
	calc(a, b); calc(a, c);
	calc(b, a); calc(b, c);
	calc(c, a); calc(c, b);
	printf("%lld\n", ans >> 2);
}

	
	 
