/*
// Sample code to perform I/O:

cin >> name;                            // Reading input from STDIN
cout << "Hi, " << name << ".\n";        // Writing output to STDOUT

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include <bits/stdc++.h> 
#define ll long long int
using namespace std; 
void solve(){
	ll t,t1,t2,v1,v2,d;
    cin >> t >> t1 >> t2 >> v1 >> v2 >> d;

    if( t > t1 and t > t2 ){
        cout<< "-1" <<endl;
        return;
    }

    double f = double(d) / v1 ;
    f = f * 60;
    f = ceil(f);
    if( t > t1 )
        f = INT_MAX;
    else
        f += t1;
    
    double s = (double)d / v2 ;
    s *= 60;
    s = ceil(s);
    if( t > t2 )
        s = INT_MAX;
    else
        s += t2 ;
    

    cout<< min(f,s)<<endl;
	
	
	
	
}
// Driver code 
int main() 
{ 	ll t;
	cin>>t;
    while(t--)
	
		solve();

	return 0; 
}


