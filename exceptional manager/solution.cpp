#include<bits/stdc++.h> 
#define ll long long int
#define mod 1000000007
using namespace std;

void solve(ll caset){
	ll n,k;
    cin >> n >> k;
    vector<string> arr;
    set<ll> s;
    map<ll,ll> mp;
    ll i ;
    for(i = 0 ; i < n ; i++) {
        string x;
        cin >> x;
        arr.push_back(x);
        s.insert(x.length());
        mp[x.length()]++;
    }

   

    for(auto y : mp) {
        if(y.second % k != 0) {
            cout << "Not possible" <<endl;
            return;
        }
    }

    cout <<"Possible" <<endl;
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
