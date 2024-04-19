
#include <bits/stdc++.h>

using namespace std;

int main() {
	#ifndef ONLINE_JUDGE
    freopen("./in.in", "r", stdin);
    freopen("./out.out", "w", stdout);
    #endif
    int t ;
    cin>>t ;
    for(int i=1 ; i<=t ; i++){
    	long long a , b ;
    	cin>>a>>b ;
    	if(max(a,b) > 2*min(a,b)) cout<<"NO"<<endl ;
    	else{
    		a = a % 3 ; 
    		b = b % 3 ;
    		if(a==0 && b==0) cout<<"YES"<<endl;
    		else if((a==1 && b==2) || (a==2 && b==1)) cout<<"YES"<<endl ;
    		else cout<<"NO"<<endl ; 
    	}
    }
}
