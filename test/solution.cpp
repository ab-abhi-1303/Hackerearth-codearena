#include<bits/stdc++.h> 
#define ll long long int
#define mod 1000000007
using namespace std;

void solve(ll caset){
	ll n;
	cin >> n;
	ll i,x;
	vector<ll> arr;
	for(i = 0; i < n ; i++) {
	    cin >> x;
	    arr.push_back(x);
	}

    sort(arr.begin() , arr.end());

    ll ans= 0;
    for(i = 0 ; i < n - 2 ; i++) {
        ans = max(ans , arr[i + 2] - arr[i]);
    }
	
	cout << ans << endl;

}


int main(){
	ll t;
	ll caset = 1;
	//cin>>t;
	//while(t--){
		//freopen ("input1.txt", "r", stdin);
		//freopen ("output1.txt", "w", stdout);
		
		solve(caset);
		caset++;
	//}
	return 0;
}
