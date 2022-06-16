#include <bits/stdc++.h>
using namespace std;




int main() {
#ifndef ONLINE_JUDGE
	//for getting input from input1.txt
	freopen("input1.txt", "r", stdin);
	//for getting output to output1.txt
	freopen("output1.txt", "w", stdout);
#endif

	int t ;
	cin >> t ;

	while (t--)
	{
		int x1 , x2 , y1 , y2 ;
		cin >> x1 >> x2 >> y1 >> y2 ;

		int ans = y1 * x2 - y2 * x1 ;

		if (ans < 0)
			ans = -1 ;
		if (ans > 0)
			ans = 1 ;

		cout << ans << endl ;
	}

	return 0;
}

