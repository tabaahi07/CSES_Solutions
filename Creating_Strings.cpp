
#include <bits/stdc++.h>

using namespace std;

int main() {
	#ifndef ONLINE_JUDGE
    freopen("./in.in", "r", stdin);
    freopen("./out.out", "w", stdout);
    #endif
    string str ;
    cin>>str ;
    set<string> st ;
    sort(str.begin() , str.end()) ;
    int count=0 ;
    do {
        st.insert(str) ;
        count++ ;
    } while (next_permutation(str.begin() , str.end()));
    cout<<count<<endl ;
    for(auto it : st) cout<<it<<endl ;
}
