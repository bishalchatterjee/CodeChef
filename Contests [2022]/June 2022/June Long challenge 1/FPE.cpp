#include <bits/stdc++.h>
using namespace std;


long long searchDFS(long long index, long long curr_par, map<long long, vector<long long>> &graph, vector<long long> &array, vector<long long> &intersection, vector<long long> &finalArr) {
	long long cs = array[index];
	long long curr_sum = 0;
	for (auto &i : graph[index]) {
		if (i != curr_par) {
			long long curr = searchDFS(i, index, graph, array, intersection, finalArr);
			curr_sum += curr;
			cs = __gcd(cs, curr);
		}
	}
	intersection[index] = cs;
	finalArr[index] = curr_sum;
	return cs;
}

void indexFind(long long index, long long curr_par, long long sum, map<long long, vector<long long>> &graph, vector<long long> &array, vector<long long> &intersection, vector<long long> &finalArr, long long &c) {
	c = max(c, sum);
	for (auto &i : graph[index]) {
		if (i != curr_par)
			indexFind(i, index, sum - intersection[i] + finalArr[i], graph, array, intersection, finalArr, c);

	}
}

void helper() {
	long long n;
	cin >> n;


	vector<long long> array(n);
	vector<long long> intersection(n);
	vector<long long> finalArr(n);


	long long c = 0;

	map<long long, vector<long long>> graph;
	
	for (long long i = 0; i < n; ++i) {
		cin >> array[i];
	}


	for (long long i = 0; i < n - 1; i++) {
		long long x, y;
		cin >> x >> y;
		x--;
		y--;
		graph[x].push_back(y);
		graph[y].push_back(x);
	}


	long long ok = searchDFS(0, -1, graph, array, intersection, finalArr);
	indexFind(0, -1, finalArr[0], graph, array, intersection, finalArr, c);
	cout << c << endl;



}

int main() {

	int t ;
	cin >> t ;

	while (t--)
	{
		helper();

	}
	return 0;


}



