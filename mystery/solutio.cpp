#include<bits/stdc++.h> 
#define ll long long int
#define mod 1000000007
using namespace std;

void solve(ll caset){
	ll n,x;
	cin >> n;
	
	//pattern is that answer no of divisors from 1 to n

	//so find all divisors
	ll count = 0;
	for(ll i = 1 ; i * i <= n ; i++) {
		if(n % i == 0) {
			count++;
			count++; //this one for n / i divisor
			//(as divisors alsways occcur in pair)
			if(i == n / i)
				count--;
		}
	}

	cout << count << endl;
	
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
