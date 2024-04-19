
#include <bits/stdc++.h>

using namespace std;

int main() {
	#ifndef ONLINE_JUDGE
    freopen("./in.in", "r", stdin);
    freopen("./out.out", "w", stdout);
    #endif
    int n ;
    cin>>n ;
    int mod = 1e9 + 7 ;
    int ans = 1 ;
    for(int i=0 ; i<n ; i++){
    	ans = (ans * 2) % mod ;
    }
    cout<<ans ;
}
