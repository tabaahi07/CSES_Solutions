
#include <bits/stdc++.h>

using namespace std;

int main() {
	#ifndef ONLINE_JUDGE
    freopen("./in.in", "r", stdin);
    freopen("./out.out", "w", stdout);
    #endif
    int n ;
    cin>>n ;
    vector<int> arr(n-1) ;
    for(int i=0 ; i<n-1 ; i++){
    	cin>>arr[i] ;
    }
    sort(arr.begin() , arr.end()) ;
    int curr = 1 ;
    for(int i=0 ; i<n-1 ; i++){
    	if(arr[i] != curr){
    		cout<<curr ;
    		return 0 ;
    	}
    	else curr++ ;
    }
    cout<<n ;
}
