#include <iostream>
#include<bits/stdc++.h>
#include <algorithm> 
#include<map>
#include<string>
#include<unordered_map>
#include <set>
#include<cmath>
#include<math.h>
#include <unordered_set>
#include<float.h>
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
long long mod = 1000000007;
const long long N = 10;
vector<int> graph[N];
bool vis[N];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout << "Enter a number" << endl;
	ll n;
	cin >> n;
	ll nn = n;
	ll pali = 0;
	while (n > 0) {
		ll r = n % 10;
		pali = pali + (10 * r);
		n = n / 10;
	}
	if (pali == nn) {
		cout << "The number is a Palindrome!" << endl;
	}
	else {
		cout << "The number is not a Palindrome!" << endl;
	}
	return 0;
}