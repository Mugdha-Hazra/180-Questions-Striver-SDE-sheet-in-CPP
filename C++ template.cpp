#include <bits/stdc++.h>

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/exception.hpp>
#include <ext/pb_ds/hash_policy.hpp>
#include <ext/pb_ds/list_update_policy.hpp>
#include <ext/pb_ds/tag_and_trait.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/trie_policy.hpp>

#define ff                 first
#define ss                 second
#define int                long long
#define amax(a,b)          if(b>a) swap(a, b)
#define amin(a,b)          if(b<a) swap(a, b)
#define pb                 push_back
#define mp                 make_pair
#define ii                 int, int
#define pii                pair<ii>
#define vi                 vector<int>
#define vvi                vector<vi>
#define si                 set<int>
#define pi                 print<int>
#define pc                 print<char>
#define ps                 print<string>
#define vpii               vector<pii>
#define vs                 vector<string>
#define gi                 greater<int>
#define mii                map<ii>
#define pqb                priority_queue<int>
#define pqs                priority_queue<int, vi, gi>
#define all(x)             x.begin(), x.end()
#define reverse(a)         reverse(all(a))
#define setbits(x)         __builtin_popcountll(x)
#define zrobits(x)         __builtin_ctzll(x)
#define deb(x)             cout << #x << "= " << x << endl;
#define gcd                __gcd
#define mod                1000000007
#define PI                 3.14159265358979323846264338
#define inf                LONG_LONG_MAX
#define pcs(x,y)           fixed << setprecision(y) << x
#define endl               '\n'
#define maxelem(a)         *max_element(all(a))
#define minelem(a)         *min_element(all(a))
#define lower(s)           transform(all(s), s.begin(), ::tolower)
#define upper(s)           transform(all(s), s.begin(), ::toupper)
#define mk(t,arr,n)        t *arr = new t[n]
#define FI(i,x,y,inc)      for(int i = x; i < y; i += inc)
#define F0(i,x)            FI(i, 0, x, 1)
#define F(i,x,y)           FI(i, x, y, 1)
#define RF(i,x,y)          for(int i = x; i >= y; i--)
#define W(x)               int zyx; cin >> zyx; F(x, 1, zyx + 1)
#define W1(x)              F(x, 1, 2)
#define takeArray(a,n)     vi a(n); F0(ari, n) cin >> a[ari];
#define printArray(arr,n)  F0(i_ar, n) cout << arr[i_ar] << ' '; cout << endl;


using namespace std;


using namespace __gnu_pbds;
using namespace __gnu_cxx;

mt19937                    rng(chrono::steady_clock::now().time_since_epoch().count());
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;


void i_o_from_file();

template<typename T>
void print(int n, ...);

int mpow(int base, int exp);



/* ********************* Your Functions and Classes Below ********************** */
















/* ********************* Your Functions and Classes Above ********************** */

void solve_tests() {

	int ans = 0;










	pi(1, ans);

	return;
}



int32_t main() {

	i_o_from_file();

	/* ******************* Your main function Code Below ******************* */





	W(tc) {

		// cout << "Case #" << tc << ": ";

		solve_tests();

	}




	/* **************** Your main function Code Above ****************** */

	return 0;
}
















/* ************************** My helper functions ************************** */


void i_o_from_file() {

	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("C:\\Users\\KIIT\\input", "r", stdin);
	freopen("C:\\Users\\KIIT\\output", "w", stdout);
#endif
}

template<typename T>
void print(int n, ...) {

	va_list ap;
	va_start(ap, n);

	F(i, 1, n + 1) {
		T a = va_arg(ap, T);
		cout << a << ' ';
	}
	cout << endl;

	va_end(ap);

	return;
}


int mpow(int base, int exp) {

	base %= mod;
	int result = 1;

	while (exp > 0) {

		if (exp & 1) result = ((int)result * base) % mod;
		base = ((int)base * base) % mod;
		exp >>= 1;
	}
	return result;

}
