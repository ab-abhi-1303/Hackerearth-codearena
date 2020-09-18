#include<bits/stdc++.h> 
#define ll long long int
#define mod 1000000007
using namespace std;

void solve(ll caset){
	ll n,x;
	cin >> n;
	
	if(n == 1) {
		cout << "1" << endl;
		return;
	}

	// pattern is 1, 2*3, 3*5 , 4*7 , 5*9...
	//2nd term a + (n - 1) * d
	cout << (n) * (2 * n % mod - 1) % mod<< endl;
	
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
