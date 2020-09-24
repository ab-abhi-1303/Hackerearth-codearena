#include<bits/stdc++.h> 
#define ll long long int
#define mod 1000000007
using namespace std;

void fun(string str, string &s, ll start ,ll end) {
	if(start > end){
		return;
	}

	ll mid = (start + end) / 2;
	s += str[mid];
	fun(str, s, start, mid - 1);
	fun(str, s , mid + 1 , end);


}

void solve(ll caset){
	ll n,x;
	cin >> n;
	
	string str ;
	cin >> str;
	string s = "";
	fun(str , s, 0 , n - 1);

	cout << s << endl;
	
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
