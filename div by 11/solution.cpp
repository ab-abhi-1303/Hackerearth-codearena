#include<bits/stdc++.h>
using namespace std;

int first_digit(int n) {
   int no_of_digits = floor(log10(n) + 1);

   return ((int) n / pow(10 , no_of_digits - 1));
}

int last_digit(int n) {
   return n % 10; 
}
string solve (vector<int> A) {
   // Write your code here
   int i = 1;
   int n = A.size();
   string str = "";
   int ans = 0;
   for(auto x : A){
      if(i <= n / 2) {
         str += to_string(first_digit(x));
      }
      else {
         str += to_string(last_digit(x));
      }
      i++;
   }

   stringstream geek(str);

   int x = 0;
   geek >> x;

   return (x % 11 == 0) ? "OUI" : "NON" ;
   
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    vector<int> A(N);
    for(int i_A=0; i_A<N; i_A++)
    {
    	cin >> A[i_A];
    }

    string out_;
    out_ = solve(A);
    cout << out_;
}
