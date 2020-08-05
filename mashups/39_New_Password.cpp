#include <bits/stdc++.h>

#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)

using namespace std;

const unsigned int M = 1e9 + 7;

int32_t main() {
	fastio;

	int n, k;
	cin >> n >> k;
	char curr = 'a';
	string ans = "";
	int t = k;
	while(t--) {
		if(curr > 'z') curr = 'a';
		ans += curr++;
	}
	while(ans.length() < n) {
		curr = 'a';
		t = k;
		while(t--) {
			if(curr > 'z') curr = 'a';
			ans += curr++;
			if(ans.length() == n) break;
		}
	}
	cout << ans;

	return 0;
}

/*
First, print k distinct characters from a to z
* If N = K, this is the answer
If there still are some characters left, print them from a to z in groups of k\
* This way, all characters in all groups are distinct
*/

/*
A. New Password
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Innokentiy decides to change the password in the social net "Contact!", but he is too lazy to invent a new password by himself. That is why he needs your help.

Innokentiy decides that new password should satisfy the following conditions:

the length of the password must be equal to n,
the password should consist only of lowercase Latin letters,
the number of distinct symbols in the password must be equal to k,
any two consecutive symbols in the password must be distinct.
Your task is to help Innokentiy and to invent a new password which will satisfy all given conditions.

Input
The first line contains two positive integers n and k (2 ≤ n ≤ 100, 2 ≤ k ≤ min(n, 26)) — the length of the password and the number of distinct symbols in it.

Pay attention that a desired new password always exists.

Output
Print any password which satisfies all conditions given by Innokentiy.

Examples
inputCopy
4 3
outputCopy
java
inputCopy
6 6
outputCopy
python
inputCopy
5 2
outputCopy
phphp
Note
In the first test there is one of the appropriate new passwords — java, because its length is equal to 4 and 3 distinct lowercase letters a, j and v are used in it.

In the second test there is one of the appropriate new passwords — python, because its length is equal to 6 and it consists of 6 distinct lowercase letters.

In the third test there is one of the appropriate new passwords — phphp, because its length is equal to 5 and 2 distinct lowercase letters p and h are used in it.

Pay attention the condition that no two identical symbols are consecutive is correct for all appropriate passwords in tests.
*/
