
#include <bits/stdc++.h>
using namespace std;

int main() {
	#ifndef ONLINE_JUDGE
    freopen("./in.in", "r", stdin);
    freopen("./out.out", "w", stdout);
    #endif
    int n ;
    cin>>n ;
    long long total_sum = ((n)*(n+1)) / 2 ;
    if(total_sum % 2 != 0) {
    	cout<<"NO"<<endl;
    	return 0 ;
    }
    long long sum = total_sum / 2 ;
    vector<int> arr1 , arr2 ;
    for(int i=n ; i>0 ; i--){
    	if(sum - i < 0) arr2.push_back(i) ;
    	else {
    		sum -= i ;
    		arr1.push_back(i) ;
    	}
    }
    if(sum != 0){
    	cout<<"NO"<<endl;
    	return 0 ;
    }
    else{
    	cout<<"YES"<<endl;
    	cout<<arr1.size()<<endl;
    	for(auto it : arr1) cout<<it<<" " ;
    	cout<<endl;
    	cout<<arr2.size()<<endl ;
    	for(auto it : arr2) cout<<it<<" " ;
    }
	
}
