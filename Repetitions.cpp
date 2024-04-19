
#include <bits/stdc++.h>

using namespace std;

int main() {
	#ifndef ONLINE_JUDGE
    freopen("./in.in", "r", stdin);
    freopen("./out.out", "w", stdout);
    #endif
    string str ;
    cin>>str ;
    if(str.length() <= 1){
    	cout<<str.length() ;
    	return 0 ;
    }
    int ans = 0 , count = 1 ;
    char curr = str[0] ;
    for(int i=1 ; i<str.length() ; i++){
    	ans = max(ans , count) ;
    	if(str[i] == curr){
    		count++ ;
    	}
    	else{
    		curr = str[i] ;
    		count = 1 ;
    	}
    }
    ans = max(ans , count) ;
    cout<<ans ;
}
