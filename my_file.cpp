#include <iostream>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <string>
#include <bitset>
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <algorithm>
#include <stack>
using namespace std;
typedef long long ll;
#define fi first
#define se second
#define pb push_back
#define mp make_pair
const int mod = (int)1e9 + 7;
int i = 0;
int gcd(int a, int b) {if (b != 0) return gcd(b, a % b); else return a;}
ll binp(ll a, ll b) {if (b == 0)return 1; ll res = binp(a, b / 2);if (b % 2)return res * res * a; return res * res;}
ll mbinp(ll a, ll b){a %= mod;if (b == 0)return 1;ll ans = mbinp(a, b/2);ll tmp = (ans * ans) % mod;if (b % 2)return ((tmp * a) % mod);return ((tmp) % mod);}

//set <int> s s.insert(7) s.begin() s.size() s.empty() s.erase(100) s.erase(s.begin(), s.find(30)) s.end() s.clear() set <int, greater <int> 
 

int main()
{ 
 int n ,j;
 int t,o;

 cin >> t;
 for (j = 0;j < t;j++)
 {
	cin >> n;
	int a[n];
	for (i = 0; i < n ;i++)
	{
		cin >> o;
		a[i] = o;
	}
	int tab[3] = { 0 }; 

	for (int i = 0; i < n; i++) { 

		a[i] %= 3; 
		tab[a[i]]++; 
	} 
	int ans = tab[0]; 
	int k = min(tab[1], tab[2]); 
	ans += k; 
	tab[1] -= k; 
	tab[2] -= k; 
	ans += tab[1] / 3 + tab[2] / 3; 
	cout << ans << '\n'; 
}
return (0);

} 

