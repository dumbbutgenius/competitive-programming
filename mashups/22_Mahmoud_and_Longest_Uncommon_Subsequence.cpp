#include <bits/stdc++.h>

#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)

using namespace std;

const unsigned int M = 1e9 + 7;

int32_t main() {
	fastio;

	string a, b;
	cin >> a >> b;
	if(a == b) {
		cout << -1;
	} else {
		cout << max(a.length(), b.length());
	}

	return 0;
}

/*
If the strings are equal, there is nothing uncommon, so answer is -1
Otherwise,
* Every string is a subsequence of itself
* So the longest uncommon subsequence is the maximum of the length of the two strings
*/

/*
A. Mahmoud and Longest Uncommon Subsequence
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
While Mahmoud and Ehab were practicing for IOI, they found a problem which name was Longest common subsequence. They solved it, and then Ehab challenged Mahmoud with another problem.

Given two strings a and b, find the length of their longest uncommon subsequence, which is the longest string that is a subsequence of one of them and not a subsequence of the other.

A subsequence of some string is a sequence of characters that appears in the same order in the string, The appearances don't have to be consecutive, for example, strings "ac", "bc", "abc" and "a" are subsequences of string "abc" while strings "abbc" and "acb" are not. The empty string is a subsequence of any string. Any string is a subsequence of itself.

Input
The first line contains string a, and the second line — string b. Both of these strings are non-empty and consist of lowercase letters of English alphabet. The length of each string is not bigger than 105 characters.

Output
If there's no uncommon subsequence, print "-1". Otherwise print the length of the longest uncommon subsequence of a and b.

Examples
inputCopy
abcd
defgh
outputCopy
5
inputCopy
a
a
outputCopy
-1
Note
In the first example: you can choose "defgh" from string b as it is the longest subsequence of string b that doesn't appear as a subsequence of string a.
*/
