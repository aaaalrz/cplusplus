// WITHOUT ACCEPTED!!!
#include <bits/stdc++.h>
using namespace std;
char mp[1005][1005];
int d[2][2] = {{1, 0}, {0, 1}}, n, m, r, ans;
void skim(int x, int y, int i, int j) {
    if (j > r) {
        ans++;
        return;
    }
    if (mp[x][y] != '.' || x < 0 || y < 0 || x >= n || y >= m)
        return;
    skim(x + d[0][i], y + d[1][i], i, j + 1);
}
int main(){
    cin >> n >> m >> r;
    for (int i = 0; i < n; i++)
        cin >> mp[i];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            for (int k = 0; k < 2; k++)
                if (mp[i][j] == '.')
                    skim(i, j, k, 1);
    cout << ans;
}