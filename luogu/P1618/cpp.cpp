#include <bits/stdc++.h>
using namespace std;
int toint(int a, int b, int c){
    return a * 100 + b * 10 + c;
}
int num[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
int main(){
    int a, b, c;
    cin >> a >> b >> c;
    if (a == 0 || b == 0 || c == 0){
        cout << "No!!!";
        return 0;
    }
    bool no = true;
    do{
        int x = toint(num[0], num[1], num[2]);
        int y = toint(num[3], num[4], num[5]);
        int z = toint(num[6], num[7], num[8]);
        if (x % a == 0 && y % b == 0 && z % c == 0){
            int dx = x / a;
            int dy = y / b;
            int dz = z / c;
            if (dx == dy && dy == dz && dx == dz){
                cout << x << " " << y << " " << z << endl;
                no = false;
            }
        }
    } while (next_permutation(num, num + 9));
    if (no) cout << "No!!!";
}