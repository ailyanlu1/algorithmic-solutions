#include <bits/stdc++.h>
typedef long long ll;
#define get(a) scanf("%lld", &a)
#define repVector(v)  for( auto it = v.begin(); it != v.end(); it++ )
#define all(c) (c).begin(), (c).end()
#define pb push_back
#define FOR(i,a,b) for( ll i = a; i <= b; i++ )
#define ROF(i,a,b) for( ll i = a; i >= b; i-- )
#define debug(x) cerr << "[DEBUG] " << #x << " = " << x << endl
#define matrix vector< vector<ll> >
#define F first
#define S second
#define mp make_pair
#define L 2*r
#define R 2*r+1
#define INPFILE freopen("input.in","r",stdin)
#define BOOST ios_base::sync_with_stdio(false); cin.tie(NULL)
using namespace std;

int main(){
	//BOOST;
	ll t; cin >> t;
	while(t--){
		ll n; cin >> n;
		vector<ll> v;
		v.pb(-1);
		FOR(i,1,n){
			ll x; cin >> x;
			v.pb(x);
		}
		sort(all(v));
		ll ans = 0;
		FOR(i,1,n){
			ll cnt = 1;
			while(i < n && v[i] == v[i+1]){
				i++; cnt++;
			}
			ans += cnt*i;
		}
		cout << ans << '\n';
	}	
}