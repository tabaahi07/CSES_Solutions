
#include <bits/stdc++.h>
using namespace std;

int main() {
	#ifndef ONLINE_JUDGE
    freopen("./in.in", "r", stdin);
    freopen("./out.out", "w", stdout);
    #endif
    int n ;
    cin>>n ;

    for(int k=1 ; k<=n ; k++){
    	unsigned long long sq = pow(k,2) ;
    	unsigned long long total_ways = (sq * (sq-1)) / 2 ;
    	unsigned long long attacking_ways = 4*(k-1)*(k-2) ;
    	unsigned long long safe = total_ways - attacking_ways ;
    	cout<<safe<<endl; 
    }
    
}
