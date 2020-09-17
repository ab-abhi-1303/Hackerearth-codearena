#include<bits/stdc++.h> 
#define ll long long int
#define mod 1000000007
using namespace std;

void solve(ll caset){
	ll a,b,m,n;
    cin >> a >> b;
    ll xorr = a ^ b;
    ll res = 0;
    while(xorr > 0) {
        xorr = (xorr & (xorr - 1));
        res++;
    }
    cout << res << endl;
	
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
