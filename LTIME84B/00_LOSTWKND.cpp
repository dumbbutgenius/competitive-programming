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
		int n = 5;
		int a[n];
		for(int i = 0; i < n; ++i) cin >> a[i];
		int tot = 0, p;
		cin >> p;
		for(int i = 0; i < n; ++i) {
			tot += a[i] * p;
		}
		if(tot > 120) cout << "Yes\n";
		else cout << "No\n";
	}

	return 0;
}

/*
Chef recently started working at ABC corporation. Let's number weekdays (Monday through Friday) by integers 1 through 5. For each valid i, the number of hours Chef spent working at the office on weekday i was Ai.

Unfortunately, due to the COVID-19 pandemic, Chef started working from home and his productivity decreased by a considerable amount. As per Chef's analysis, 1 hour of work done at the office is equivalent to P hours of work done at home.

Now, in order to complete his work properly, Chef has to spend more hours working from home, possibly at the cost of other things like sleep. However, he does not have to do the same work on each day as he would have in the office ― for each weekday, he can start the work for this day on an earlier day and/or complete it on a later day. The only requirement is that his work does not pile up indefinitely, i.e. he can complete his work for each week during the same week. One day has 24 hours.

If Chef is unable to complete his work for a week during those five weekdays, then he has to work during the weekend too. Chef wishes to know whether he has to work on weekends or if he can complete his work by working only on weekdays. Help him answer that question. (It is possible that Chef would be unable to finish his work even if he worked all the time, but he does not want to know about that.)

Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first and only line of each test case contains six space-separated integers A1, A2, A3, A4, A5 and P.
Output
For each test case, print a single line containing the string "Yes" if Chef has to work on weekends or "No" otherwise (without quotes).

Constraints
1≤T≤1,000
0≤Ai≤24 for each valid i
1≤P≤24
Subtasks
Subtask #1 (100 points): original constraints

Example Input
2
14 10 12 6 18 2
10 10 10 10 10 3
Example Output
No
Yes
Explanation
Example case 1: Here, P=2, so the number of hours Chef has to work from home to handle his workload for days 1 through 5 is [28,20,24,12,36]. If he works for full 24 hours on each of the five weekdays, he finishes all the work, so he does not have to work on weekends.

Example case 2: No matter what Chef does, he will have to work on weekends.
*/
