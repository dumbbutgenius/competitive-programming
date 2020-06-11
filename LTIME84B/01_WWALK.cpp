#include <bits/stdc++.h>

#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)

using namespace std;

const unsigned int M = 1e9 + 7;

int32_t main() {
	fastio;

	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int a[n], b[n];
		for(int i = 0; i < n; ++i) cin >> a[i];
		for(int i = 0; i < n; ++i) cin >> b[i];
		int x = 0, y = 0, ans = 0;
		bool ok = false;
		for(int i = 0; i < n; ++i) {
			if(x == y && a[i] == b[i]) ans += a[i];
			x += a[i];
			y += b[i];
		}
		cout << ans << '\n';
	}

	return 0;
}

/*
Alice and Bob are walking on an infinite straight street. Initially, both are at the position X=0 and they start walking in the direction of increasing X. After N seconds, they stop. Let's denote Alice's speed and Bob's speed during the i-th of these seconds by Ai and Bi respectively.

Sometimes, Alice and Bob walk together, i.e. with the same speed side by side. Let's define the weird distance as the total distance they walk this way. Find this weird distance.

Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first line of each test case contains a single integer N.
The second line contains N space-separated integers A1,A2,…,AN.
The third line contains N space-separated integers B1,B2,…,BN.
Output
For each test case, print a single line containing one integer ― the total weird distance. It can be proved that this distance is an integer.

Constraints
1≤T≤20
1≤N≤105
1≤Ai≤105 for each valid i
1≤Bi≤105 for each valid i
the sum of N over all test cases does not exceed 106
Subtasks
Subtask #1 (30 points): 1≤N≤1,000
Subtask #2 (70 points): original constraints

Example Input
3
4
1 3 3 4
1 2 4 4
2
2 3
3 2
2
3 3
3 3
Example Output
5
0
6
Explanation
Example case 1:

Alice and Bob walk side by side during the first second, from X=0 to X=1.
Then, Alice starts walking faster than Bob, so they do not walk side by side during second 2. At the end of second 2, Alice is at X=4, while Bob is at X=3.
During the next second, they again do not walk side by side, but Bob walks faster, so they both end up at X=7.
During the last second, they both walk side by side and the distance they walk is 4.
Alice and Bob walk side by side during the 1-st and 4-th second and the total weird distance they travel is 1+4=5.
Example case 2:

First, Alice walks with speed 2 and Bob walks with speed 3, so they do not walk side by side. Alice ends up at X=2, while Bob ends up at X=3 at the end of the 1-st second.
Then, Alice walks with speed 3 and Bob walks with speed 2, so they do not walk side by side either.
Although Alice and Bob both end up at X=5 at the end of the 2-nd second, the weird distance is 0.
Example case 3: We can see that Alice and Bob always walk together, so the weird distance is 3+3=6.
*/
