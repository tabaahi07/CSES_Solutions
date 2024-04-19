
#include <bits/stdc++.h>

using namespace std;

int main() {
	#ifndef ONLINE_JUDGE
    freopen("./in.in", "r", stdin);
    freopen("./out.out", "w", stdout);
    #endif
    long long n ;
    cin>>n ;
    while(n!=1){
    	cout<<n<<" " ;
    	if(n%2==0) {
    		n = n / 2 ;
    	}
    	else n = n*3 + 1 ;
    }
    cout<<n ;
}
