
#include <bits/stdc++.h>

using namespace std;

int main() {
	#ifndef ONLINE_JUDGE
    freopen("./in.in", "r", stdin);
    freopen("./out.out", "w", stdout);
    #endif
    int n ;
    cin>>n ;
    if(n==1) {
    	cout<<1 ;
    	return 0 ;
    }
    if(n<4) {
    	cout<<"NO SOLUTION" ;
    	return 0 ;
    }
    if(n==4){
    	cout<<2<<" "<<4<<" "<<1<<" "<<3 ;
    	return 0 ;
    }
    int i=1 , j ;
    if(n % 2 == 0){
    	j = n/2 + 1 ;
    	while(j<=n){
	    	cout<<i<<" "<<j<<" " ;
	    	i++ ; j++ ;
	    }
    }
    else{
    	j = n/2 + 2 ;
    	while(j<=n){
	    	cout<<i<<" "<<j<<" " ;
	    	i++ ; j++ ;
	    }
	    cout<<i ;
    }
    

}
