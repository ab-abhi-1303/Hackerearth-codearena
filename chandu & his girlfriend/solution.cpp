#include<bits/stdc++.h> 
#define ll long long int
#define mod 1000000007
using namespace std;

void solve(ll caset){
	ll n,x;
	cin >> n;
	ll i;
	vector<ll> arr;
	map<ll,ll> mp;
	set<ll> set;
	for(i = 0 ; i < n ; i++) {
		cin >> x;
		arr.push_back(x);
	}

	sort(arr.begin(), arr.end() , greater<ll>());

    for(auto y : arr) {
        cout << y << " ";

    }
	cout << endl;
}


int main(){
	ll t;
	ll caset = 1;
	cin>>t;
	while(t--){
		//freopen ("input1.txt", "r", stdin);
		//freopen ("output1.txt", "w", stdout);
		
		solve(caset);
		caset++;
	}
	return 0;
}
