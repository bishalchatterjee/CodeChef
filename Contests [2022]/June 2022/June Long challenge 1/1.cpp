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
		int x, y;
		cin >> x >> y;
		if (x - y < 0)
			cout << 0 << endl;
		else
			cout << x - y << endl;
	}

	return 0;
}

