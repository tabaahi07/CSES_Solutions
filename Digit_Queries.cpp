

#define ll long long 
#include <bits/stdc++.h>
using namespace std;

char findDigit(int k){
    ll numCount = 9 ;
    ll digitsCount = 1 ;
    ll start = 1 ;
    // finding range in which that digit lies
    while(k > numCount * digitsCount){
        k -= numCount * digitsCount ;
        numCount *= 10 ;
        start *= 10 ;
        digitsCount ++ ;
    }
    // Step 2: Find the specific number where kth digit resides
    long long number = start + (k - 1) / digitsCount;
    // Step 3: Calculate the position of the digit within that number
    int position = (k - 1) % digitsCount;

    // Step 4: Extract the digit
    int ans = to_string(number)[position];
    return ans ;

}

int main() {
	#ifndef ONLINE_JUDGE
    freopen("./in.in", "r", stdin);
    freopen("./out.out", "w", stdout);
    #endif
    int q ;
    cin>>q ;
    for(int i=0 ; i<q ; i++){
        int posn ;
        cin>>posn ;
        cout<<findDigit(posn)<<endl; 
    }
}
