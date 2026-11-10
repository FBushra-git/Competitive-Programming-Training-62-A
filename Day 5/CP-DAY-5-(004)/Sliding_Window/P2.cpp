#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    long long s;
    cin >> n >> s;

    vector <int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    int l = 0, mx = 0;
    long long sum = 0;
    for(int r = 0; r < n; r++) {
        sum += a[r];

        while(sum > s) {
            sum -= a[l];
            l++;
        }

        mx = max(mx, r - l + 1);
    }
    cout << mx << endl;

}
int main() {
    solve();
}