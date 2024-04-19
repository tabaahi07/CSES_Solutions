
#include <bits/stdc++.h>
using namespace std;
int moves = 0 ;
vector<pair<int,int>> ans ;
void f(int n , int from , int to , int aux){
	if(n==0) return ;
	f(n-1 , from , aux , to) ;
	ans.push_back({from,to}) ;
	moves ++ ;
	f(n-1 , aux , to , from) ;
}

int main() {
	#ifndef ONLINE_JUDGE
    freopen("./in.in", "r", stdin);
    freopen("./out.out", "w", stdout);
    #endif
    int n ;
    cin>>n ;
    f(n , 1 , 3 , 2) ;
    cout<<moves<<endl;
    for(auto it : ans)cout<<it.first<<" "<<it.second<<endl ;
}
