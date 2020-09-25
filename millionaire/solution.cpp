#include<bits/stdc++.h> 
#define ll long long int
#define mod 1000000007
using namespace std;

void solve(ll caset){
	ll n,x;
	cin >> n;
	
	//prob if prize in same door = 1 / n;
    //probability with prize in other doors = 1 - (1 / n) = (n - 1) / n
    double ans = double(n - 1) / n ;

    cout << fixed << setprecision(6) << ans << endl;
	
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
