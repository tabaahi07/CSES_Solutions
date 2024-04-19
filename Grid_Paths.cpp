#include <bits/stdc++.h>
using namespace std;

int ans = 0;
void dfs(int i, int j, string& s, int idx, int vis[][9]){
    if((vis[i][j-1] && vis[i][j+1]) && (!vis[i-1][j] && !vis[i+1][j])) return;
    if((vis[i-1][j] && vis[i+1][j]) && (!vis[i][j-1] && !vis[i][j+1])) return;
 
    if(i == 7 && j == 1){
        if(idx == (int)s.size()){
            ans++;
        }
        return;
    }
    if(idx == (int)s.size()) return;
    vis[i][j] = 1;
    int x[] = {-1, 1, 0, 0};
    int y[] = {0, 0, -1, 1};
    if(s[idx] == '?'){
        for(int p=0; p<4; p++){
            int nr  = i + x[p];
            int nc  = j + y[p];
            if(!vis[nr][nc]) dfs(nr, nc, s, idx+1, vis);
        }
    }else{
        if(s[idx] == 'U'){
            int nr = i - 1;
            int nc = j;
            if(!vis[nr][nc]) dfs(nr, nc, s, idx+1, vis);
        }else if(s[idx] == 'D'){
            int nr = i + 1;
            int nc = j;
            if(!vis[nr][nc]) dfs(nr, nc, s, idx+1, vis);
        }else if(s[idx] == 'L'){
            int nr = i;
            int nc = j - 1;
            if(!vis[nr][nc]) dfs(nr, nc, s, idx+1, vis);
        }else{
            int nr = i;
            int nc = j + 1;
            if(!vis[nr][nc]) dfs(nr, nc, s, idx+1, vis);
        }
    }
    vis[i][j] = 0;
}
 

int main() {
	#ifndef ONLINE_JUDGE
    freopen("./in.in", "r", stdin);
    freopen("./out.out", "w", stdout);
    #endif
     string s;
    cin >> s;
    int vis[9][9] = {0};
    // set border to all side
    for(int i=0; i<9; i++){
        vis[0][i] = 1;
        vis[8][i] = 1;
        vis[i][0] = 1;
        vis[i][8] = 1;
    }
    dfs(1, 1, s, 0, vis);
    cout << ans << endl;
    return 0;

}
