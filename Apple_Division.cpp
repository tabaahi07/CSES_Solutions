
#include <bits/stdc++.h>
using namespace std;
int n ;
long long total = 0 ;
long long half ;
unordered_map<string,pair<long long,long long>> dp ;
pair<long long,long long> f(vector<int> &wt , int ind , long long sum ){
    //cout<<"i : "<<ind<<" , sum : "<<sum<<endl ;
    if(ind == n ){
        return {abs(sum-half) , sum} ;
    }
    string str = to_string(ind) + "_" + to_string(sum) ;
    if(dp.find(str) != dp.end()) return dp[str] ;
    long long ans = abs(sum-half) ;
    pair<long long,long long> take = f(wt , ind+1 , sum + wt[ind] ) ;
    pair<long long,long long> notTake = f(wt , ind+1 , sum ) ;
    pair<long long,long long> candidate ;
    if(take.first < notTake.first) candidate = take ;
    else candidate = notTake ;
    //cout<<"ans : "<<ans<<" , take : "<<take<<" , notTake : "<<notTake<<endl;
    if(candidate.first < ans) dp[str] = candidate ;
    else dp[str] = {ans,sum} ;
    //cout<<"str : "<<str<<" , dp.first : "<<dp[str].first<<" , second : "<<dp[str].second<<endl;
    return dp[str] ;
}

int main() {
	#ifndef ONLINE_JUDGE
    freopen("./in.in", "r", stdin);
    freopen("./out.out", "w", stdout);
    #endif
    cin>>n ;
    vector<int> wt(n) ;
    for(int i=0 ; i<n ; i++) {
    	cin>>wt[i] ;
    	total += wt[i] ;
    }
    half = total / 2 ;
    //cout<<"total : "<<total<<" , half : "<<half<<endl ;
    auto s = f(wt,0,0) ;
    //cout<<s.first<<"--"<<s.second<<endl;
    cout<<abs((total-s.second) - s.second) ;
}
